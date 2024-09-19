#include <bits/stdc++.h>
using namespace std;

string imie; int liczba;

int main(){
    cout<<"podaj imie:";
    cin>>imie;
    cout<<"podaj dodatnia liczba całkowita:";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)
        cout<<i<<". "<<imie<<endl;
}