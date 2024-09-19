#include <bits/stdc++.h>
using namespace std;

string imie; int liczba;

int populacja=1; int godzin=0;

int main(){
    while(populacja<=1000000000)
{
        godzin++;
        populacja=populacja *2;
    
        cout<<"mineło godzin:"<<godzin;

        cout<<"liczba bakteri: "<<populacja<<endl;
}
}
