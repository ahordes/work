#include <iostream>
#include <algorithm>
using namespace std;

void sort_desc (int a[]){
     for (int i = 0; i < 8; ++i){
         cout << a[i] << " "; 
     }   
}




int main(){
    int a[] = {1, 4,  8, 32, 2 , 13, 37, 22, };
    
    cout << "sortowanie od najwiekszej do najmniejszej : " << endl;
    sort(a,a+8,greater<int>());
    sort_desc(a);
    return 0;
    
}