#!/usr/bin/env python3
"""
Convert Markdown files to PDF using FPDF2
Usage: python md2pdf.py input.md output.pdf
"""

import sys
import re
from fpdf import FPDF

class MarkdownPDF(FPDF):
    def __init__(self):
        super().__init__()
        self.set_auto_page_break(auto=True, margin=15)

    def header(self):
        self.set_font('Arial', 'B', 10)
        self.set_text_color(100, 100, 100)
        self.cell(0, 8, 'CppCalculator - Beginner Guide', 0, 0, 'L')
        self.ln(10)

    def footer(self):
        self.set_y(-15)
        self.set_font('Arial', 'I', 8)
        self.set_text_color(128, 128, 128)
        self.cell(0, 10, f'Page {self.page_no()}/{{nb}}', 0, 0, 'C')

    def chapter_title(self, title, level=1):
        if level == 1:
            self.set_font('Arial', 'B', 16)
            self.set_text_color(44, 62, 80)
            self.cell(0, 12, title, 0, 1, 'L')
            self.set_draw_color(52, 152, 219)
            self.set_line_width(0.5)
            self.line(10, self.get_y(), 200, self.get_y())
            self.ln(5)
        elif level == 2:
            self.set_font('Arial', 'B', 14)
            self.set_text_color(52, 73, 94)
            self.cell(0, 10, title, 0, 1, 'L')
            self.ln(3)
        elif level == 3:
            self.set_font('Arial', 'B', 12)
            self.set_text_color(127, 140, 141)
            self.cell(0, 8, title, 0, 1, 'L')
            self.ln(2)

    def body_text(self, text):
        self.set_font('Arial', '', 10)
        self.set_text_color(51, 51, 51)
        # Clean up markdown formatting
        text = re.sub(r'\*\*(.*?)\*\*', r'\1', text)  # Remove bold markers
        text = re.sub(r'\*(.*?)\*', r'\1', text)  # Remove italic markers
        text = re.sub(r'`(.*?)`', r'\1', text)  # Remove code markers
        # Remove special unicode characters
        text = re.sub(r'[^\x00-\x7F]+', '', text)
        if text.strip():
            self.multi_cell(0, 6, text)
            self.ln(2)

    def code_block(self, code):
        self.set_fill_color(45, 45, 45)
        self.set_text_color(248, 248, 242)
        self.set_font('Courier', '', 9)

        # Calculate height needed
        lines = code.split('\n')
        line_height = 5
        block_height = len(lines) * line_height + 10

        # Check if we need a new page
        if self.get_y() + block_height > 270:
            self.add_page()

        y_start = self.get_y()
        self.rect(10, y_start, 190, block_height, 'F')

        self.set_xy(15, y_start + 5)
        for line in lines:
            # Remove special unicode characters
            clean_line = re.sub(r'[^\x00-\x7F]+', '', line)
            self.cell(0, line_height, clean_line, 0, 1)
            self.set_x(15)

        self.set_y(y_start + block_height + 5)
        self.set_text_color(51, 51, 51)

    def bullet_point(self, text, indent=0):
        self.set_font('Arial', '', 10)
        self.set_text_color(51, 51, 51)
        x_pos = 15 + indent
        self.set_x(x_pos)
        self.cell(5, 6, '-', 0, 0)  # Simple dash as bullet
        # Clean up markdown
        text = re.sub(r'\*\*(.*?)\*\*', r'\1', text)
        text = re.sub(r'`(.*?)`', r'\1', text)
        # Remove special unicode characters
        text = re.sub(r'[^\x00-\x7F]+', '', text)
        self.cell(0, 6, text, 0, 1)
        self.ln(1)

    def table_row(self, cells, is_header=False):
        self.set_font('Arial', 'B' if is_header else '', 9)

        if is_header:
            self.set_fill_color(52, 152, 219)
            self.set_text_color(255, 255, 255)
        else:
            self.set_fill_color(242, 242, 242)
            self.set_text_color(51, 51, 51)

        col_width = 190 / len(cells)
        for cell in cells:
            # Clean up markdown
            cell = re.sub(r'`(.*?)`', r'\1', cell)
            # Remove special unicode characters
            cell = re.sub(r'[^\x00-\x7F]+', '', cell)
            self.cell(col_width, 8, cell[:30], 1, 0, 'C', True)
        self.ln()

def parse_markdown(md_file):
    """Parse markdown file and return structured content"""
    with open(md_file, 'r', encoding='utf-8') as f:
        content = f.read()

    return content

def md_to_pdf(md_file, pdf_file):
    """Convert markdown to PDF"""
    content = parse_markdown(md_file)

    pdf = MarkdownPDF()
    pdf.alias_nb_pages()
    pdf.add_page()

    lines = content.split('\n')
    i = 0
    in_code_block = False
    code_content = []

    while i < len(lines):
        line = lines[i].rstrip()

        # Handle code blocks
        if line.startswith('```'):
            if in_code_block:
                # End of code block
                pdf.code_block('\n'.join(code_content))
                code_content = []
                in_code_block = False
            else:
                # Start of code block
                in_code_block = True
            i += 1
            continue

        if in_code_block:
            code_content.append(line)
            i += 1
            continue

        # Handle headers
        if line.startswith('#'):
            level = line.count('#')
            title = line.lstrip('#').strip()
            if level <= 3:
                pdf.chapter_title(title, level)
            i += 1
            continue

        # Handle bullet points
        if line.startswith('- ') or line.startswith('* '):
            text = line[2:].strip()
            pdf.bullet_point(text)
            i += 1
            continue

        # Handle numbered lists
        if re.match(r'^\d+\.', line):
            text = re.sub(r'^\d+\.\s*', '', line)
            pdf.bullet_point(text)
            i += 1
            continue

        # Handle tables (simple detection)
        if '|' in line and line.strip().startswith('|'):
            # Collect table rows
            table_lines = []
            while i < len(lines) and '|' in lines[i]:
                table_lines.append(lines[i])
                i += 1

            # Parse table
            for idx, table_line in enumerate(table_lines):
                if re.match(r'^[\|\s\-:]+$', table_line):
                    continue  # Skip separator line
                cells = [c.strip() for c in table_line.split('|') if c.strip()]
                if cells:
                    pdf.table_row(cells, is_header=(idx == 0))
            continue

        # Handle blockquotes
        if line.startswith('>'):
            text = line[1:].strip()
            pdf.set_fill_color(249, 249, 249)
            pdf.set_draw_color(52, 152, 219)
            pdf.rect(10, pdf.get_y(), 3, 8, 'F')
            pdf.set_x(18)
            pdf.set_font('Arial', 'I', 10)
            pdf.set_text_color(100, 100, 100)
            pdf.multi_cell(170, 6, text)
            pdf.ln(2)
            i += 1
            continue

        # Handle empty lines
        if not line.strip():
            pdf.ln(3)
            i += 1
            continue

        # Handle horizontal rules
        if line.startswith('---') or line.startswith('***'):
            pdf.set_draw_color(189, 195, 199)
            pdf.line(10, pdf.get_y(), 200, pdf.get_y())
            pdf.ln(5)
            i += 1
            continue

        # Regular text
        pdf.body_text(line)
        i += 1

    # Save PDF
    pdf.output(pdf_file)
    print(f"Successfully created: {pdf_file}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python md2pdf.py input.md output.pdf")
        sys.exit(1)

    md_to_pdf(sys.argv[1], sys.argv[2])
