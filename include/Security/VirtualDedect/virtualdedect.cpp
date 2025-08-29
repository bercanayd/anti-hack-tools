#include <windows.h>
#include <stdio.h>
#include <iostream>
#include "virtualdedect.h"
#include <thread>

// Define FOREGROUND_WHITE as a combination of red, green, and blue
#ifndef FOREGROUND_WHITE
#define FOREGROUND_WHITE (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#endif

int width =  GetSystemMetrics(SM_CXVIRTUALSCREEN);
int height = GetSystemMetrics(SM_CYVIRTUALSCREEN);

std::string deviceId = "";
void CheckisCameraOpen(void)
{
    // Placeholder: Camera detection not implemented for standard C++
    std::cout << "Camera detection is not implemented in this version." << std::endl;
}


void CursorFollower(void){
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    



    int cursorxval = cursorPos.x/50;
    int cursoryval = cursorPos.y/50;
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
   // std::cout << "\rCursor Position: (" << cursorxval << ", " << cursoryval << ")\r" << std::endl;

    std::cout <<"[";
    for(int i = 0; i<= cursorxval; i++){
        std::cout<<"#";
    }
    std::cout <<"]\n";
    SetConsoleTextAttribute(hConsole, 7);
}



extern void screentester(void){
    std::cout << "Screen test started...\n"<<std::endl;
    std::cout << "Width: " << width << "\nHeight: " << height << std::endl;
    auto val = width * height;
    printf("%d \n", val);
}