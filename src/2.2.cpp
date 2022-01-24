#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout << "	Prosze podac liczbe a,b i c" << endl;
cin >> a >> b >> c;
for (int i=b; i>=a ; --i){
if (!(i%c))
cout << i << endl;
 } 
return 0;
}
