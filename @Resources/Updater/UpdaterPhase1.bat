@echo off
cscript "Updater.vbs"
powershell.exe -Command "Set-ExecutionPolicy RemoteSigned -Scope CurrentUser"
powershell.exe -File "Updater.ps1"
start /w ..\..\..\Ilustro-Full-master\@Resources\Updater\UpdaterPhase2.bat
exit
