#include <iostream>

using namespace std;

float srednia(float *tab, int ile)
{
    float suma=0;

    for (int i=0; i<ile; i++)
    {
        suma+=*tab;
        *tab = 999;
        tab++;
    }
    return suma/ile;
}

int main()
{
    float a,b,c;

    a = 1.5;
    b = 2.3;
    c = 0.75;

    cout<<"Srednia wynosi: "<<srednia(tablica,3);

    cout<<tablica[0]<<endl;
    cout<<tablica[1]<<endl;
    cout<<tablica[2]<<endl;
    return 0;
}
