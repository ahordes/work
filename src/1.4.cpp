#include <iostream>
using namespace std;

int main () {

            cout << "prosze podac dwie liczby" << endl;
            int p,d;
            cin >> p;
            cin >> d;
            if (p>d) { 
                     cout << p << " jest wieksza liczba" << endl;
                     }
            else if(p<d)  {
                     cout << d << " jest wieksza liczba" << endl;
                     }
            else {
                cout << p << "=" << d << endl;
            }

}