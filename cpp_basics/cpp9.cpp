#include <bits/stdc++.h>
using namespace std;
#include <time.h>
int liczba;

int main(){

    cout<<"witaj w losowaniu! za trzy sekundy nastąpi zwolnienie blokady";
    sleep(3);
    cout<<endl;

    srand (time (NULL));

    for (int i=1; i<=6; i++);
{
    liczba = rand()%49+1;
    sleep(1);
    cout<<liczba<<"\a"<<endl;
}

}