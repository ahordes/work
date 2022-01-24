#include <iostream>
using namespace std;

auto czy_parzysta(int a) -> bool{
    if (a % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a;
    cout << "prosze podac liczbe do sprawdzenia" << endl;
    cin >> a;

    if (czy_parzysta(a) == 0){
        cout << "podana liczba nie jest parzysta,a ya dolbaeb)" << endl;
    }
    else {
        cout << "podana liczba jest parzysta" << endl;
    }
}