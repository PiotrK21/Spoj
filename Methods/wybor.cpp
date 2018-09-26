#include <iostream>
#include <fstream>
#include "zadania.h"

using namespace std;

void Wczytaj(int);

void Fun_wybor(int i)
{
    void (*wsk_fun[10])();

    wsk_fun[0] = Problem_Collatza;
    wsk_fun[1] = Czy_umiesz_potegowac;
    wsk_fun[2] = Dwie_cyfry_silni;
    wsk_fun[3] = Liczby_pierwsze;
    wsk_fun[4] = Dwumiany;
    wsk_fun[5] = Imieniny;

    system("cls");
    Wczytaj(i-1);
    cin.clear();
    cin.sync();
    cout << "\n";
    wsk_fun[i-1]();
    cout << "\n";
    system("pause");
    system("cls");

}

void Wczytaj(int i)
{
    string linia;
    fstream plik;

    string lista[10];

    lista[0] = "Methods\\problem_Collatza.txt";
    lista[1] = "Methods\\czy_umiesz_potegowac.txt";
    lista[2] = "Methods\\dwie_cyfry_silni.txt";
    lista[3] = "Methods\\liczby_pierwsze.txt";
    lista[4] = "Methods\\dwumiany.txt";
    lista[5] = "Methods\\imieniny.txt";

    plik.open(lista[i], ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
    }
}

