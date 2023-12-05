Param(
    [string]$day
)

$main="${day}.py"

New-Item -Path './' -Name $day -ItemType 'directory'
Copy-Item "./Makefile" -Destination "./${day}"
Set-Location -Path $day
New-Item -Path './' -Name $main -ItemType File 
New-Item -Path './' -Name 'sample.txt' -ItemType File 
New-Item -Path './' -Name 'input.txt' -ItemType File 
New-Item -Path './' -Name 'main.cpp' -ItemType File
Set-Location -Path '../'