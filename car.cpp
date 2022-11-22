#include <stdio.h>
#include <dos.h>
#include <graphics.h>
using namespace std;
void full();
void car();
int main()
{
    int gd = DETECT, gm;
    initwindow(1750, 700);
    setfillstyle(1, 15);
    floodfill(300, 220, 1);
    car();
    getch();
    closegraph();
}
void car()
{
    setcolor(0);
    int i;
    for (i = 1; i < 1700; i++)
    {
        setfillstyle(1, 15);
        floodfill(300, 220, 1);
        line(1, 380, 1800, 380);
        line(100 + i, 350, 100 + i, 370);
        setfillstyle(1,4);
        line(100 + i, 350, 110 + i, 350);
        line(110 + i, 350, 130 + i, 325);
        line(130 + i, 325, 190 + i, 325);
        line(190 + i, 325, 210 + i, 350);
        line(210 + i, 350, 240 + i, 350);
        line(240 + i, 350, 240 + i, 370);

        line(100 + i, 370, 110 + i, 370);
        line(130 + i, 370, 210 + i, 370);
        line(230 + i, 370, 240 + i, 370);

        line(120 + i, 350, 135 + i, 330);
        line(120 + i, 350, 160 + i, 350);
        line(160 + i, 350, 160 + i, 330);
        line(160 + i, 330, 135 + i, 330);

        line(165 + i, 350, 165 + i, 330);
        line(188 + i, 330, 205 + i, 350);
        line(165 + i, 350, 205 + i, 350);
        line(165 + i, 330, 188 + i, 330);

        circle(120 + i, 370, 10);
        circle(220 + i, 370, 10);

        delay(15);
        cleardevice();
    }
}
