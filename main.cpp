#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "zadania.h"

using namespace std;

SMALL_RECT sr; // struktura wykorzystywana do ustawienia rozmiaru okna
sr.Left = 0; // na zero
sr.Top = 0; // na zero
sr.Right = c2.X-1; // szerokość o 1 mniejsza od bufora
sr.Bottom = c2.Y-1; // wysokość o 1 mniejsza od bufora
SetConsoleWindowInfo(handle,true,&sr); // ustawia rozmiar okna (jednostka to szerokość i wysokość pojedynczego znaku)

int main()
{
    int A=1, wybor;

    while(A)
{
    Menu();

        wybor = getch()-48;

        if(wybor==0)
            return 0;
        else
            Fun_wybor(wybor);

        A=1;
    }
    return 0;
}

