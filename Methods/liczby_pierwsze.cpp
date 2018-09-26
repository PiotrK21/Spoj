#include <iostream>
#include <math.h>
#include "zadania.h"

using namespace std;

void pierwsza(int x)
{
    if((x%((int)sqrt(x))==0 && x>3) || x==1) cout <<"NIE"<<endl;
    else if(x==2 || x==3) cout <<"TAK"<<endl;
    else
    {
        int liczba = sqrt(x);
        int j=0;
        while(x%(liczba-j)!=0)
        {
            if((liczba-(j+1))==1)
            {
                cout<<"TAK"<<endl;
                return;
            }
            else j++;
        }

        cout <<"NIE"<<endl;

    }
}

void Liczby_pierwsze()
{
    int n;
    unsigned int *tab;

    cin >> n;

    tab = new unsigned int [n];

    for(int i=0; i<n; i++)
    {
        cin >> tab[i];
    }

    for(int i=0; i<n; i++)
    {
        pierwsza(tab[i]);
    }

    /*for(int i=0; i<n; i++)
    {
        cout << tab[i] << endl;
    }*/

    delete [] tab;
}
