#include <iostream>
using namespace std;
int main() {
    int angka;

    cout<<"Masukkan Bilangan: ";
    cin>>angka;

    if (angka%2==0)
    {
        cout<<"Bilangan Ini Genap";
    }
    else 
    {
        cout<<"Bilangan Ini Ganjil";
    }
    
    system("pause");
    return 0;
}
