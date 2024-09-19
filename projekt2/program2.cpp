#include <iostream>
using namespace std;
int PIN; 
string login, hasło;
int main(){

    cout << "podaj login:"<< endl;
    cin>> login;
    cout << "podaj hasło:"<< endl;
    cin>> hasło;
    
    if((login=="koza") && (hasło=="1234"))
    {
        cout<<"udało się zalogować";
    }
    else
    {
        cout<<"nie udało się zalogować";
    }
    return 0;
}