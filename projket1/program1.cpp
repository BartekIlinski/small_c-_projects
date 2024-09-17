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