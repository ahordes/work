#include <iostream>
using namespace std;
int main (){
int lim ,dzl ,summ = 0 ,i;
cout << "prosze podac limit i dzielnik:" << endl;
cin >> lim >> dzl;
for (i = 0; i<=lim; ++i)
if (i % dzl == 0)
    summ += i;
cout << "suma to : " << summ << endl;
}