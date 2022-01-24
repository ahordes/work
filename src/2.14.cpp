#include <iostream>
using namespace std;

int main (){
    int a;
    cout << "prosze podac wyimiar(wiekszy od 3)" << endl;
    cin >> a;

    for (int l = 1; l <= a; ++l){
        cout << "*";
    }
    cout << endl;



    for (int m = 1; m <= (a-2); ++m){
        for (int n = 1; n <= 1; ++n){
            cout << "*";
        }
        for (int spc = 1; spc <= (a-2); ++spc){
            cout << " " ;
        }
       cout << "*" << endl;
    }
    
    for (int pdl = 1; pdl <= a; ++pdl){
        cout << "*";
    }
    return 0;
}