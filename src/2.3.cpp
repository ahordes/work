#include <iostream>
using namespace std;
int main(){
int a,b,s;
cout << "       Prosze podac liczbe a,b i s" << endl;
cin >> a >> b >> s ;
if (s < 0){
    s = s * (-1);
}
for (int i = 10; i >= a; i = i - s){
     cout << "a " << i << endl;
}
for (int m=1; m < b; m = m + s) {
    cout << "b " << m << endl;
}
return 0;
}



