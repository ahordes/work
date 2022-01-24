#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main (){
    string wrd;
    char find;
    cout << "prosze podac slowo" << endl;
    cin >> wrd;

    cout << "prosze podac litere" << endl;
    cin >> find;

    int value = count(wrd.begin(), wrd.end(), find);
    cout << "znaleziono: " << value << " " << find << endl; //pzdc))
}