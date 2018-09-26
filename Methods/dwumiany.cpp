#include <iostream>
#include "zadania.h"

using namespace std;

void dwumian(int *n, int *k, int T)
{
    unsigned int tab[1000][1000];

    tab[0][1] = 2;
    tab[1][1] = 1;

    tab[0][0] = 1;

    //cout << k << " " << n << endl;

    for(int j=2; j < 1000; j++)
    {
        for(int i=0; i < 1000; i++)
        {
            if (i == j)
            {
                tab[i][j] = 1;
                break;
            }
            else if (i == 0) tab[i][j] = j+1;
            else
            tab[i][j] = tab[i-1][j-1] + tab[i][j-1];

            //cout << tab[i][j] << endl;
        }

    }

    for(int i=0; i < T; i++)
    {

	if(k[i]==0) cout << 1 << endl;
	else cout << tab[k[i]-1][n[i]-1] << endl;
    }
}

void Dwumiany()
{
    int T;
    int *n, *k;

    cin >> T;

    n = new int [T];
    k = new int [T];

    for(int i = 0; i < T; i++)
    {
        cin >> n[i];
        cin >> k[i];
    }

    dwumian(n,k,T);

    //tab_dwu = dwumian(k-1,n-1);

    //cout << wynik << endl;

    delete [] n;
    delete [] k;
}
