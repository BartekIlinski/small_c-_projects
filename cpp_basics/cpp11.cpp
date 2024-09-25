#include <bits/stdc++.h>
using namespace std;
#include <iomanip>

long double fib[100000]; int n;

int main(){
    cout<< "ile liczb Fibonacciego mam wyznaczyć: ";
    cin>>n;

    fib[0]=1;
    fib[1]=1;

    for(int i=2; i<n; i++)
{
        fib[i] = fib[i-1] + fib[i-2];
}

    cout<<setprecision(10000);

    //for(int i=0; i<n; i++)
//{
        //cout<<endl<<"wyraz nr"<<i+1<<": "<<fib[i];
//}

//cout<<endl<<"wyraz nr "<<n<<": "<<fib[n-1];

cout<<"złota liczba: "<<fib[n-1]/fib[n-2];
}