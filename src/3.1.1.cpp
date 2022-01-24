#include <iostream>
using namespace std;

 void init(int size) {   
         int* a= new int[size];
         for (int i = 0 ; i < size; ++i){
            a[i] = 0;
            cout << a[i] << endl;
         } 
 }  


int main(){
    int n;
    cout << "podaj  n" << endl;
    cin >> n;
    init(n);
    
}
