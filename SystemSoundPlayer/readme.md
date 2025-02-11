# System Sound Player
This program can play Windows system sounds.

# Arguments
The following arguments can be specified:
If the argument is not specified or is invalid, nothing happens.
| Valid arguments | Name in ``MessageBeep`` function | Sound Played | 
| --- | --- | --- |
| ``ding``<br>``MB_OK`` | ``MB_OK`` | Ding |
| ``MB_ICONHAND``<br>``MB_ICONERROR``<br>``error`` | ``MB_ICONERROR``<br>``MB_ICONHAND``<br>``MB_ICONSTOP`` | Error |
| ``MB_ICONEXCLAMATION``<br>``MB_ICONWARNING``<br>``warning`` | ``MB_ICONEXCLAMATION``<br>``MB_ICONWARNING`` | Warning |
| ``MB_ICONINFORMATION``<br>``MB_ICONASTERISK``<br>``information`` | ``MB_ICONASTERISK``<br>``MB_ICONINFORMATION`` | Information
| ``MB_ICONQUESTION``<br>``question`` | ``MB_ICONQUESTION`` | Question |

# Compatibility
This program is built using the Windows XP toolset. ~It is designed to work on Windows XP as well, but it says ``MSVCP140.dll not found``. Maybe I just don't have the runtime properly installed on my Windows XP VM, but it didn't work on my XP VM anyway.~

## Tested
This program has been verified to work properly with the following operating systems:
* Windows Vista Ultimate SP2
* Windows 7 Ultimate SP1
* Windows 11 Pro 23H2 OS Build 22631.3527
* Windows XP Professional SP3

Windows XP or later should work in environments other than these.

# Download
This program can be downloaded [here](https://github.com/YuuyaGitHub/Various-CPP-applications/raw/main/SystemSoundPlayer/Release/SystemSoundPlayer.exe).
