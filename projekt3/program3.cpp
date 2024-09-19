#include <bits/stdc++.h>
using namespace std;
string PIN;
int main(){
    cout << "Witaj w naszym banku" << endl;
    cout << "podaj numer PIN:" << endl; 
    cin >> PIN;

    if(PIN=="1234")
    {
        cout << "poprawny PIN";
    }
    else
    {
        cout << "niepoprawny PIN";
    }   
}