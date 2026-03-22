@echo off
setlocal enabledelayedexpansion

REM Get the current C++ file from VS Code (or compile the first .cpp file)
for %%f in (*.cpp) do (
    set "cppfile=%%f"
    goto :compile
)

:compile
if defined cppfile (
    echo Compiling %cppfile%...
    g++ "%cppfile%" -o "%cppfile:~0,-4%.exe"
    if errorlevel 1 (
        echo Compilation failed!
        pause
        exit /b 1
    )
    echo Running %cppfile:~0,-4%.exe...
    "%cppfile:~0,-4%.exe"
) else (
    echo No C++ files found!
    pause
)
