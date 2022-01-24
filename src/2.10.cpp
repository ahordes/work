#include <iostream>
using namespace std;

int main (){
    int a, silnia = 1, i = 1; 
    cout << "prosze podac liczbe" << endl;
    cin >> a;
    do {
        silnia = silnia * i;
        ++i;
    } while (i <= a);
    cout << silnia << endl;


}