#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "prosze podac wymiary trojkata" << endl;
    cin >> a;

    for (int l = 0; l <= a; l++){
        for (int m = 1; m <=l; ++m){
            cout << "*";
        }
        cout << endl;
    }

}