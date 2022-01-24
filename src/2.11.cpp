#include <iostream>
using namespace std;

int main(){
int a;
cout << "prosze podac wymiar prostokata" << endl;
cin >> a;

for (int l = 1; l <= 2; ++l){
    for (int m=1; m <= a; ++m){
        cout << "*";
    }
    cout << endl;
}
 
}