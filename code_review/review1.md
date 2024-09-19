# code review 1

---

### Zmiany: 
1. zmieniłem nazwy plików na cppX.cpp
2. zmieniłem strukture plików, teraz wszystkie programy są w jednym katalogu

---

### cpp1

<table>
<tr>
<td>
    jak ty masz 
</td>
<td>
    jak jest lepiej
</td>
</tr>
<tr>
<td>

```cpp
#include <iostream>

int main(){
    
    
    int uczniowie, cukierki,x,y;
    
    std::cout << "Ilu ucznuw jest w twojej klasie:";
    std::cin>> uczniowie;
    
    std::cout << "Ile cukierkow kupila mama:";
    std::cin>>cukierki;

    x = cukierki/(uczniowie-1);

    std::cout << "Cukierkow dla kazdego ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);

    std::cout << "Dla Jasia na wieczur: "<<y;
    
    return 0;
}
```

</td>
<td>

```c
#include <iostream>

int main(){
    int uczniowie, cukierki, x, y; //nie zostwaniaj niepotrzebnego miejsca 
    
    std::cout << "Ilu ucznuw jest w twojej klasie:";
    std::cin>> uczniowie;
    
    std::cout << "Ile cukierkow kupila mama:";
    std::cin>>cukierki;

    x = cukierki/(uczniowie-1);

    std::cout << "Cukierkow dla kazdego ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);

    std::cout << "Dla Jasia na wieczur: "<<y;
    
    return 0;
}
```


</td>
</tr>
</table>

</div>

### cpp2 
git

### cpp3
git 

### cpp4

<table>
<tr>
<td>
    jak ty masz 
</td>
<td>
    jak jest lepiej
</td>
</tr>
<tr>
<td>

```cpp
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
```

</td>
<td>

```cpp
#include <bits/stdc++.h> //zmiana indetacji (tabów) na lepszy
using namespace std;
//tutaj odstęp
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
    }//usunięcie niepotrzebnie zostawionego miejsca
}
```

</td>
</tr>
</table>

</div>

### cpp5

<table>
<tr>
<td>
    jak ty masz 
</td>
<td>
    jak jest lepiej
</td>
</tr>
<tr>
<td>

```cpp
#include <bits/stdc++.h>
using namespace std;
#include<unistd.h>
#include<cstdlib>
    int main(){

    for (int i=15; i>=0; i--)
    {
        cout << i<<endl;
        sleep(1);
        system("clear");
    }
    cout <<"JEBUT!";

}
```

</td>
<td>

```cpp
#include <bits/stdc++.h>  //pogrupowanie bibliotek
#include<unistd.h> 
#include<cstdlib>

using namespace std;

int main(){ //poprawa indentacji

    for (int i=15; i>=0; i--)
    {
        cout << i <<endl;
        sleep(1);
        system("clear");
    }
    cout <<"JEBUT!";
}
```

</td>
</tr>
</table>

</div>

### cpp6
git

### cpp7

<table>
<tr>
<td>
    jak ty masz 
</td>
<td>
    jak jest lepiej
</td>
</tr>
<tr>
<td>

```cpp
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
```

</td>
<td>

```cpp
#include <bits/stdc++.h>
using namespace std;

string imie; int liczba;
int populacja=1; int godzin=0;

int main(){
    while(populacja<=1000000000) //poprawa indentacji 
    {
        godzin++;
        populacja=populacja * 2;
    
        cout<<"mineło godzin:"<<godzin;

        cout<<"liczba bakteri: "<<populacja<<endl;
    }
}
```

</td>
</tr>
</table>

</div>