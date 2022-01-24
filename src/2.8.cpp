#include <iostream>
using namespace std;


int main (){
    int a ,silnia = 1;
    cout << "prosze podac liczbe " << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i){
        silnia = silnia*i;
        cout << silnia << endl;   
    }

                                 


}