#include <iostream>
#include "zadania.h"

using namespace std;

void fun_imieniny(int tab1, int tab2)
{
    if(tab1>1 && (tab2)%(tab1-1)==0) cout << "NIE" <<endl;
    else cout << "TAK" <<endl;
}

void Imieniny()
{

    int D;
    int *tab1, *tab2;

    cin >> D;

    tab1 = new int [D];
    tab2 = new int [D];

    for(int i=0; i<D; i++)
    {
        cin >> tab1[i];
        cin >> tab2[i];
    }

    /*
    for(int i=0; i<D; i++)
    {
        cout << tab1[i] <<" ";
        cout << tab2[i] <<endl;
    }
    */

    for(int i=0; i<D; i++)
    {
        fun_imieniny(tab1[i],tab2[i]);
    }

    delete [] tab1;
    delete [] tab2;
}
