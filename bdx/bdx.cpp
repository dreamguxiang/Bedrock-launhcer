#include<stdlib.h>
#include<stdio.h>
#include <windows.h>
#include <conio.h>
#include <strsafe.h>
#include <iostream>
#include<iostream>
#include<time.h>
using namespace std;
int b = 0;
int e = 20;
int f = 40;
int g = 60;
int h = 80;;
int i = 100;
int ch,ch1,ch2;
char filename[255];
int main()
{
    cout << "*****************************************************************\n" ;
    cout << "                       Welcome to BedrockX\n" ;
    cout << "                   The server is about to start\n" ;
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", b);
    system(filename);
    cout << "***********" ;
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", e);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", f);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", g);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", h);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", i);
    system(filename);
    cout << "**********\n";
    Sleep(500);
begin:
    while (1)
    {
        sprintf_s(filename, "title Welcome to BedrockX★BDX Author:Sysca11★Number of restarts:%d", b);
        system(filename);
        system("bedrock_server.exe");
        cout << "*****************************************************************\n" ;
        cout << "                Shutdown, restart in 5 seconds" << endl;
        cout << "*****************************************************************\n" ;
        cout << "                Press Esc to close the process" << endl;
        cout << "*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            cout << ch;
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                     Ready to restart--5s\n*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                     Ready to restart--4s\n*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                     Ready to restart--3s\n*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                     Ready to restart--2s\n*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                     Ready to restart--1s\n*****************************************************************\n" ;
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 27) { break; }
        }
        Sleep(1000);
        cout << "                          Restarting\n*****************************************************************\n" ;
        Sleep(1000);
        b = b + 1;
    }
    cout << "                  Automatic restart blocked\n*****************************************************************\n" ;
    cout << "Please press Esc to exit the process & press the space bar to restart the process..." << endl;
    if (_kbhit())
    {
        ch1 = _getch();
        if (ch1 == 27) { goto stop; }
        else if (ch1 == 32)
            goto begin1;
    }
    else
    { 
        ch1 = _getch();
    if (ch1 == 27) { goto stop; }
       else if (ch1 == 32)
        goto begin1;
     }

begin1:
    cout << "*****************************************************************\n" ;
    cout << "                     Restarting, please wait" << endl;
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", b);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", e);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", f);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", g);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", h);
    system(filename);
    cout << "***********";
    Sleep(500);
    sprintf_s(filename, "title  Welcome to BedrockX★BDX Author:Sysca11★Starting:%d％", i);
    system(filename);
    cout << "**********\n";
    Sleep(500);
    b = b + 1;
    goto begin;
stop:
    exit(0);

}

int main2()
{
    return 0;
}
