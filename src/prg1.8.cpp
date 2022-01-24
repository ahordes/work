#include <iostream>
using namespace std;
#include <string>

int main (){
    string wrd;

    cout << "prosze podac slowo" << endl;
    cin >> wrd;

    for (string::size_type i = 0; i < wrd.size();i = i+3){
        cout << wrd[i] << " ";
    }
    return 0;
}
