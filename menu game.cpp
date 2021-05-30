#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    initwindow(1366,768);
    while(1);
    {
        settextstyle(8,HORIZ_DIR,7);
        outtextxy(345,55,"GO FLY!");
        line(getmaxx()/2,0,getmaxx(),getmaxy());
    }
}
