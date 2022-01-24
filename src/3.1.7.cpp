#include <iostream>
using namespace std;

auto sort_asc(int a[], int n) -> void {
    for (int i = 0; i < (n - 1); ++i){
        for (int j = 0; j < (n - i - 1); ++j){
            if (a[j] > a[j + 1]){
                int brd = a[j];
                a[j] = a [j+1];
                a[j+1] = brd;
            }
        }
    }
}




int main(){
    int a[] = {1, 4, 8, 8, 32, 2 , 13, 37, 22, 8, 580, 0, 8 };
    int n = sizeof(a)/sizeof(a[0]);
    int dermo;
    sort_asc(a,n);
    cout << "sortowanie od mniejszej do wiekszej : " << endl;
    for (dermo = 0; dermo < n; ++dermo)
    cout << a[dermo] << " " << endl;
    return 0;
    
}



//blyat esli ya ne zdam sesiyu ya naxyi vypilyus blyat`)))))