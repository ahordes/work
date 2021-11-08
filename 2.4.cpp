#include <iostream>
using namespace std;
int main(){
int a,b,i;
cout << "Prosze podac liczbe" << endl;
cin >> a;
for (i=2,b=0 ; i<a;i++)
 if (!(a%i))
 b=1;
if (!b)
cout << "Liczba " << a << " jest liczba prosta" << endl;
else 
cout << "Liczba " << a << " nie jest liczba prosta" << endl; 
return 0;
}
