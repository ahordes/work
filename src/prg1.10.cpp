#include<iostream>
#include <string>
using namespace std;

int main(){
    
    string bred [5] = { "Hello", "World", "in   ", "a    ", "BOX  " };
    
    for (int i = 1; i <= 7; ++i)
    {
        cout << "*" ;
        
    }
cout << endl;
    for (int l = 0; l < 5; ++l){
        cout << "*" << bred[l] << "*" << "\n";
    }
    
     for (int i = 1; i <= 7; ++i)
     {
        cout << "*";
         
     }
    
    return 0;
}