#include <bits/stdc++.h>
using namespace std;
#include <iomanip>
 #include <cstdlib>
int nr_miesionca;
 
int main(){
    cout << "podaj numer miesiąca: ";

    if (!(cin >> nr_miesionca))
    {
        cerr<<"to nie jest liczba";
        exit(0);
    }
    switch (nr_miesionca)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "ten miesiąc ma 31 dni ";
            break;
    
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "ten miesiąc ma 30 dni ";
            break;
    
        case 2:
            int rok;
            cout<< "podaj rok: ";
            cin>> rok;
        
            if (((rok%4 == 0) && (rok%100 != 0)) || (rok%400 == 0))
                cout << "ten miesiąc ma 29 dni";
            else
                cout << "ten miesiąc ma 29 dni";
        
            break;
    
        default:
            cout << "nie poprawny numer miesiąca";
    }
}