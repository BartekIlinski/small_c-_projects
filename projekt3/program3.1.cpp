    #include <bits/stdc++.h>
    using namespace std;
    int wiek;

    int main(){
    cout<< "iel masz lat?"<< endl; 
    cin >> wiek;

    if (wiek<18)
    {
        cout << "jesteś nie pełno letni i niemożesz kandydować na prezydenta"<< endl; 
    }
    else if((wiek>=18) && (wiek<=35))
    {
        cout << "jesteś pełnoletni ale nie możesz być prezydentem\n";
    }
    else 
    {
        cout << "jesteś pełnoletni i możesz kandydować na prezydenta\n"; 
    }
    
        
}