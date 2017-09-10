@echo off
set FILENAME=output.html
cd /d %~dp0
start "" "C:\Program Files\Internet Explorer\iexplore.exe" "%~dp0%FILENAME%"
exit /b 0
