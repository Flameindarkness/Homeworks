@echo off
for /L %%i IN (1,1,100000000) DO (call :l %%i)
pause
exit/b
:l
	set /a s=%1*%1 %%1000000
	if %s% equ 269696 echo %1
	