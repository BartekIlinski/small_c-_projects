#include <bits/stdc++.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

float x, y;
char wybor;

int main(){

for(;;)
{
cout<< "podaj pierwszą liczbe: ";
cin>> x;
cout<< "podaj drugą liczbe: ";
cin>> y;

cout<<endl;
cout << "MENU GŁUWNE" <<endl;
cout << "----------------" <<endl;
cout << "1. dodawanie" <<endl;
cout << "2. odejmowanie" <<endl;
cout << "3. mnożenie" <<endl;
cout << "4. dzielenie" <<endl;
cout << "5. koniec programu" <<endl;

cout << endl;


switch(wybor)
{
case '1':
    
        cout<<"suma = " <<x+y;
    
break;

case '2':
    
        cout<<"roznica = " <<x-y;
    
break;

case '3':
    
        cout<<"iloczyn = " <<x*y;
    
break;

case '4':
    if (y==0) cout << " nie dzielimy przez zero ";
        cout<<"iloraz = " <<x/y;
    
break;
default: cout<<"nie ma takiej opcji w menu";

case '5':
    exit(0);
break;
}

getchar();getchar();
system("cls");

}

}   