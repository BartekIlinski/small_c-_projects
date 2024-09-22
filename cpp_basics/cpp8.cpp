#include <bits/stdc++.h>
using namespace std;


int liczba, strzal, ile_prub=0;
int main(){

    cout<<"witaj pomyślałem sobie liczbe 1..100"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
{
    ile_prub++;

    cout<<"zgadni jaka (to twoja "<<ile_prub<<" próba):";
    cin>>strzal;

    if(strzal<liczba)
    
    cout<<"udało się, wygrywasz w "<<ile_prub<<" próbie"<<endl;
    
    if(strzal<liczba)
    cout<<"to za mało"<<endl;

    else if(strzal>liczba)
    cout<<"to za dużo"<<endl;
}

    system("pause");

}    