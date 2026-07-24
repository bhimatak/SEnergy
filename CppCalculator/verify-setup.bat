@echo off
REM ============================================
REM CppCalculator - Setup Verification Script
REM Run this to check if everything is installed
REM ============================================

echo.
echo ========================================
echo  CppCalculator Setup Verification
echo ========================================
echo.

set PASS=0
set FAIL=0

REM Check g++
echo [1/6] Checking g++ compiler...
g++ --version >nul 2>&1
if %errorlevel% == 0 (
    echo      [PASS] g++ is installed
    set /a PASS+=1
) else (
    echo      [FAIL] g++ not found - Install MinGW and add to PATH
    set /a FAIL+=1
)

REM Check make
echo [2/6] Checking make...
mingw32-make --version >nul 2>&1
if %errorlevel% == 0 (
    echo      [PASS] make is installed
    set /a PASS+=1
) else (
    echo      [FAIL] make not found - Install MinGW and add to PATH
    set /a FAIL+=1
)

REM Check git
echo [3/6] Checking git...
git --version >nul 2>&1
if %errorlevel% == 0 (
    echo      [PASS] git is installed
    set /a PASS+=1
) else (
    echo      [FAIL] git not found - Install Git for Windows
    set /a FAIL+=1
)

REM Check cmake
echo [4/6] Checking cmake...
cmake --version >nul 2>&1
if %errorlevel% == 0 (
    echo      [PASS] cmake is installed
    set /a PASS+=1
) else (
    echo      [FAIL] cmake not found - Install CMake
    set /a FAIL+=1
)

REM Check project structure
echo [5/6] Checking project structure...
if exist "inc" (
    echo      [PASS] inc/ folder exists
    set /a PASS+=1
) else (
    echo      [FAIL] inc/ folder not found - Wrong directory?
    set /a FAIL+=1
)

if exist "src" (
    echo      [PASS] src/ folder exists
    set /a PASS+=1
) else (
    echo      [FAIL] src/ folder not found - Wrong directory?
    set /a FAIL+=1
)

if exist "tests" (
    echo      [PASS] tests/ folder exists
    set /a PASS+=1
) else (
    echo      [FAIL] tests/ folder not found - Wrong directory?
    set /a FAIL+=1
)

if exist "Makefile" (
    echo      [PASS] Makefile exists
    set /a PASS+=1
) else (
    echo      [FAIL] Makefile not found - Wrong directory?
    set /a FAIL+=1
)

REM Check build
echo [6/6] Checking if project can build...
mingw32-make all >nul 2>&1
if %errorlevel% == 0 (
    echo      [PASS] Project builds successfully
    set /a PASS+=1
) else (
    echo      [FAIL] Build failed
    set /a FAIL+=1
)

REM Summary
echo.
echo ========================================
echo  Results: %PASS% passed, %FAIL% failed
echo ========================================
echo.

if %FAIL% == 0 (
    echo  SUCCESS! Everything is set up correctly.
    echo.
    echo  Next steps:
    echo    1. Run tests: mingw32-make test
    echo    2. Open VS Code: code .
    echo    3. Start coding!
) else (
    echo  SOME ISSUES FOUND. Please fix the [FAIL] items above.
    echo.
    echo  Common fixes:
    echo    - Add MinGW to PATH: C:\MinGW\bin
    echo    - Run from project folder: cd C:\CppCalculator
    echo    - See COMPLETE_BEGINNER_GUIDE.md for help
)

echo.
pause
