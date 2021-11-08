#include <iostream>
using namespace std;
int main(){
int a,b,summ;
cout << "prosze podac limit i dzielnik" << endl;
cin >> a >> b;
for (int i=0; i<=a; i++)
if (!(i%b==0)){
summ=summ+i;
cout << summ;
}
}
