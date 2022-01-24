#include <iostream>
using namespace std;

auto czy_dzieli(int a, int b){
if (a % b == 0){
    return true;
}
else {
    return false;
}

}


auto czy_npr(int a) -> bool{
    if (a % 2 == 1){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int a;
    cout << "prosze podac liczbe do sprawdzenia" << endl;
    cin >> a;


    if (czy_npr(a) == 1){
        cout << "liczba nie jest do podzielenia" << endl;
    }
    else {
        cout << "liczba jest podzielna"  << endl;
    }
}
