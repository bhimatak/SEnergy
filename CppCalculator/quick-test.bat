@echo off
REM ============================================
REM Quick Test Script - Build and Run Tests
REM ============================================

echo.
echo Building and running tests...
echo.

mingw32-make clean 2>nul
mingw32-make test

if %errorlevel% == 0 (
    echo.
    echo SUCCESS! All tests passed.
) else (
    echo.
    echo FAILED! Check the errors above.
)

echo.
pause
