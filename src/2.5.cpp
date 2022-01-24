#include <iostream>
using namespace std;

int main(){
int a,b,i,sum=0;
cout << "Prosze podac liczbe" << endl;
cin >> a;
for (i = 2 ,b = 0 ; i < a; i++)
 if ( ! ( a % i ) )
 b=1;
if (!b) {
    cout << "jest liczba pierwsza" << endl;
    for (b = 2; b <= a; b++){
        for (i = 2; i <= (b/2); i++){
            if (b % i == 0 ){
                i = b;
                break;
            }
        }
        if (i != b){
            sum+=b;
        }
    }
    sum = sum + 2;
    cout << "suma to: " << sum << endl;
}
return 0;
}