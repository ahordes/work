#include <iostream>
using namespace std;

void iota(int size, int start) {
    int* a=new int[size];
    int i=start;
    int lft = size+start;
    for (i; i< lft ; ++i) 
    {
         cout << i << endl;    
    }
   
}

int main() {
    int size,start;
    cout << "prosze podac rozmiar i start"<< endl;
    cin >> size >> start;
    iota(size,start);
    return 0;
}

