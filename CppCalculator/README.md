# CppCalculator

A simple calculator project demonstrating C++ development with unit testing.

## Quick Start

**New to the project?** Start here:

1. Open `COMPLETE_BEGINNER_GUIDE.md` - Step-by-step guide for beginners
2. Run `verify-setup.bat` to check your installation
3. Follow the guide to build and run tests

## Project Commands

```bash
# Build the project
mingw32-make all

# Run the calculator
bin\calculator.exe

# Run all tests
mingw32-make test

# Clean build files
mingw32-make clean
```

## Documentation

| File | Description |
|------|-------------|
| `COMPLETE_BEGINNER_GUIDE.md` | Start here if you're new |
| `SETUP_GUIDE.md` | Detailed setup and configuration |
| `verify-setup.bat` | Check if everything is installed |

## Need Help?

1. Check `COMPLETE_BEGINNER_GUIDE.md` for step-by-step instructions
2. See "Common Problems" section in the beginner guide
3. Ask your team lead

## Project Structure

```
CppCalculator/
├── inc/            # Header files
├── src/            # Source files
├── tests/          # Unit tests
├── third_party/    # External libraries (Google Test)
├── bin/            # Executables (generated)
├── obj/            # Compiled files (generated)
└── Makefile        # Build instructions
```

## Testing

This project uses Google Test for unit testing.

```bash
# Run all tests
mingw32-make test

# Run specific tests
mingw32-make test-add
mingw32-make test-mock
```

See `COMPLETE_BEGINNER_GUIDE.md` for detailed testing instructions.
