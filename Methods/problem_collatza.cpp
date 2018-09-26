#include <iostream>
#include "zadania.h"

using namespace std;

int Collatz(int s)
{
    int n=0, *x;

    x = new int[n];

    x[n]=s;

    while(x[n]!=1)
    {
        if(x[n]%2 == 0)
        {
            x[n+1]=x[n]/2;
        }
        else
        {
            x[n+1]=3*x[n]+1;
        }
        n++;
    }

    delete [] x;
    x = 0;

    return n;
}

void Problem_Collatza()
{
    int t,*wsk;

    cin >> t;
    //cout << t;

    wsk = new int[t];

    for(int i=0; i<t; i++)
    {
        cin >> wsk[i];
    }

    for(int i=0; i<t; i++)
    {
        cout << Collatz(wsk[i]) << endl;
    }

    delete [] wsk;
    wsk = 0;
}
