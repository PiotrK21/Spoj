#include <iostream>
#include <string>
#include "zadania.h"

using namespace std;

int silnia(int n)
{
    int iloczyn = 1;

    for(int i=1; i <= n; i++)
    {
        iloczyn=iloczyn*i;
    }

    return iloczyn;
}

void wyjscie(int wynik)
{
    string liczba;
    int rozmiar;

    if(wynik < 10)
    {
        cout << "0 " << wynik << endl;
    }
    else
    {
        liczba = to_string(wynik);
        rozmiar = liczba.size();
        //cout << rozmiar << endl;
        cout << liczba[rozmiar-2] <<" "<< liczba[rozmiar-1] << endl;
    }
}

void Dwie_cyfry_silni()
{
    int t;
    int n[30], wynik[30];

    //cout << "Wejscie:" << endl;

    cin >> t;

    for(int i=0; i<t ; i++)
    {
        cin >> n[i];
    }

    for(int i=0; i<t ; i++)
    {
        if(n[i] < 10)
        {
            wynik[i] = silnia(n[i]);

            wyjscie(wynik[i]);
        }
        else
        {
            cout << "0 0" << endl;
        }
    }

    //cout << endl << "Wyjscie:" << endl;
}
