#include <iostream>
#include <string>
using namespace std;

int main(){
    string imr[5];
    int man = 0; 
    int wmn = 0;

    for (int i = 0; i < 5; ++i){
        cout << "prosze podac imie" << endl;
        cin >> imr[i];

    }
    for (int i = 0; i < 5; ++i){
        if (imr[i].back() == 'a' || imr[i].back() == 'A'){
            ++wmn;
        }
        else {
            ++man;
        }
    }
    cout << "zenskich imien jest: " << wmn << endl << "meskich jest: " << man << endl;
}