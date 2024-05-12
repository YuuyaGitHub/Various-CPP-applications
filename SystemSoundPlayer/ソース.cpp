#include <iostream>
#include <windows.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        // If there are no arguments, do nothing
        return 0;
    }
    else {
        std::string arg = argv[1];
        if (arg == "-ding" || arg == "/ding" || arg == "-MB_OK" || arg == "/MB_OK") {
            MessageBeep(MB_OK);
        }
        else if (arg == "-MB_ICONHAND" || arg == "/MB_ICONHAND" || arg == "-MB_ICONERROR" || arg == "/MB_ICONERROR" || arg == "-error" || arg == "/error") {
            MessageBeep(MB_ICONSTOP);
        }
        else if (arg == "-MB_ICONQUESTION" || arg == "/MB_ICONQUESTION" || arg == "-question" || arg == "/question") {
            MessageBeep(MB_ICONQUESTION);
        }
        else if (arg == "-MB_ICONEXCLAMATION" || arg == "/MB_ICONEXCLAMATION" || arg == "-MB_ICONWARNING" || arg == "/MB_ICONWARNING" || arg == "-warning" || arg == "/warning") {
            MessageBeep(MB_ICONWARNING);
        }
        else if (arg == "-MB_ICONINFORMATION" || arg == "/MB_ICONINFORMATION" || arg == "-MB_ICONASTERISK" || arg == "/MB_ICONASTERISK" || arg == "-information" || arg == "/information") {
            MessageBeep(MB_ICONINFORMATION);
        }
    }
    return 0;
}
