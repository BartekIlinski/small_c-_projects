#include <bits/stdc++.h>
using namespace std;

// float oceny[5]; float suma=0, średnia;     
float oceny[5], suma = 0, średnia; //tak jest ładniej 

int main(){ //to jest poprawna indentacja 
    for(int i=0; i<5; i++)
    {
        cout<<endl<<"podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        suma += oceny[i];
    }

    średnia = suma /5;
    cout<<endl<<"średnia =  "<<średnia<<endl;
}