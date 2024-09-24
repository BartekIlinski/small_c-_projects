#include <bits/stdc++.h>
using namespace std;

float oceny[5]; float suma=0, średnia;

int main(){

for(int i=0; i<5; i++)
{
    cout<<endl<<"podaj "<<i+1<<" ocene: ";
    cin>>oceny[i];
    suma += oceny[i];
}

średnia = suma /5;
cout<<endl<<"średnia =  "<<średnia;



}