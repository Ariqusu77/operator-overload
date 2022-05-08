#include <iostream>
#include "grafika.hpp"

void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}

void draw_rectangle(int Xmin, int Ymin, int Xmax, int Ymax)
{
    int temp=Xmin;
    while(temp <= Xmax)
    {
        gotoxy(temp, Ymin);  std::cout << "X";
        gotoxy(temp, Ymax);  std::cout << "X";
        temp++;
    }

    temp=Ymin;
    while(temp <= Ymax)
    {
        gotoxy(Xmin, temp);  std::cout << "X";
        gotoxy(Xmax, temp);  std::cout << "X";
        temp++;
    }
}