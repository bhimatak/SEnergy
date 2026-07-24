@echo off
REM ============================================
REM Convert Markdown files to PDF
REM ============================================

echo.
echo Converting Markdown files to PDF...
echo.

python md2pdf.py "COMPLETE_BEGINNER_GUIDE.md" "COMPLETE_BEGINNER_GUIDE.pdf"
python md2pdf.py "SETUP_GUIDE.md" "SETUP_GUIDE.pdf"
python md2pdf.py "README.md" "README.pdf"

echo.
echo Done! PDF files created:
echo   - COMPLETE_BEGINNER_GUIDE.pdf
echo   - SETUP_GUIDE.pdf
echo   - README.pdf
echo.
pause
