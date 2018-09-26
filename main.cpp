#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "zadania.h"

using namespace std;

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

