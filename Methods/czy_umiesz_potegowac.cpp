#include <iostream>
#include <math.h>
#include <string>
#include "zadania.h"

using namespace std;

void Czy_umiesz_potegowac()
{
    int a;
    int dlugosc[10], spacja[10];
    int wynik[10], potega[10];
    int dwojka[4] = {2,4,8,6};
    int trojka[4] = {3,9,7,1};
    int siodemka[4] = {7,9,3,1};
    int osemka[4] = {8,4,2,6};

    string liczba[10], podstawa[10];

    cin >> a;

    cin.ignore();

    for(int i=0; i<a;)
    {
        getline(cin, liczba[i]);
        i++;
    }

    for(int i=0; i<a; i++)
    {
        dlugosc[i] = liczba[i].size();
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<dlugosc[i]; j++)
        {
            if(liczba[i][j] == ' ')
            {
                spacja[i] = j;
            }
            else;
        }
    }

    for(int i=0; i<a; i++)
    {
        podstawa[i] = liczba[i].substr(0,spacja[i]);
        potega[i] = stoi(liczba[i].substr(spacja[i]+1,dlugosc[i]));
        /*
        cout << podstawa[i] << endl;
        cout << potega[i] << endl;
        cout << podstawa[i][spacja[i]-1] << endl;
        */
    }

    for(int i=0; i<a; i++)
    {
        switch(podstawa[i][spacja[i]-1])
        {
        case '0':
            cout << "0" << endl;
            break;
        case '1':
            cout << "1" << endl;
            break;
        case '2':

            for(int j=0; j < 4; j++)
            {
                wynik[i] = potega[i] + 3 - j;
                if(wynik[i]%4 == 0)
                    cout << dwojka[j] << endl;
            }

            break;
        case '3':

            for(int j=0; j < 4; j++)
            {
                wynik[i] = potega[i] + 3 - j;
                if(wynik[i]%4 == 0)
                    cout << trojka[j] << endl;
            }

            break;
        case '4':

            if(potega[i]%2 == 0)
                cout << "6" << endl;
            else
                cout << "4" << endl;

            break;
        case '5':
            cout << "5" << endl;
            break;
        case '6':
            cout << "6" << endl;
            break;
        case '7':

            for(int j=0; j < 4; j++)
            {
                wynik[i] = potega[i] + 3 - j;
                if(wynik[i]%4 == 0)
                    cout << siodemka[j] << endl;
            }

            break;
        case '8':

            for(int j=0; j < 4; j++)
            {
                wynik[i] = potega[i] + 3 - j;
                if(wynik[i]%4 == 0)
                    cout << osemka[j] << endl;
            }

            break;
        case '9':

            if(potega[i]%2 == 0)
                cout << "1" << endl;
            else
                cout << "9" << endl;

            break;
        }
    }
}
