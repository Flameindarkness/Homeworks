@echo off
for /L %%A in (33,1,255) do (
    call :_tochar %%A
    cmd /c exit %%A
)
exit /b
:_tochar
setlocal
cmd /c exit %1
echo %1- "%=exitcodeAscii%"
exit /b

