#include <iostream>
using namespace std;

auto search(int arr[], int n, int ndl) -> int {
    int a = 0; 
    for (int i = 0; i < n; ++i) {
        if (ndl == arr[i]){
            a = i;
            break;
        }
        else {
            a = -1;
        }
    }
    return a;
}

int main (){
    cout << "prosze podac wartosc poszukiwanej liczby" << endl;
    int ndl;
    cin >> ndl;
    int arr[] = { 42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12 };
    int n = sizeof(arr)/sizeof(arr[0]);
    if (search(arr, n, ndl) == 0){
        cout << "-1";

    }
    else {
        cout << "indeks poszukiwanej wartosci:  " << search( arr, n, ndl) << endl;
    }
    return 0;
}