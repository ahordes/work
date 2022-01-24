#include <iostream>
using namespace std;

int asum(int size)
{
    int* a=new int[size];
    int suma = 0;
    for (int i=0; i<size; ++i) 
    {
        cout << "prosze podac liczbe" << i << endl;
        cin >> a[i];
    }
   for (int i = 0; i<size; ++i){
   suma = suma+a[i];
   }
    cout << "suma wynosi  " << suma;
}

int main() {
    int b; 
    cout << "podaj  rozmiar tablicy" << endl;
    cin >> b;
    asum(b);
    return 0;
}
