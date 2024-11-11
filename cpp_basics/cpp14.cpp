#include <bits/stdc++.h>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main(){

cout << "podaj imie : "; cin>>imie;
cout << "podaj nazwisko : "; cin>>nazwisko;
cout << "podaj nr telefonu : "; cin>>nr_tel;

fstream plik ;
plik.open("wizytowka.txt", ios::in | ios::app);

if(plik.good()==false)
{
    cout<<"plik nie istnieje";
    exit(0);
}
string linia;
int nr_linii;
while (getline(plik,  linia))
{
switch(nr_linii)
{
    case 1: imie = linia; break;
    case 2: nazwisko = linia; break;
    case 3: nr_tel =atoi (linia.c_str()); break;
}
nr_linii++;
}
plik.close();

cout<<imie<<endl;
cout<<nazwisko<<endl;
cout<<nr_tel<<endl;

plik.close();
}