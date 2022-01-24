#include <iostream>
using namespace std;
#include <stack>

//gowno proba;int main (){
//const int n = 10;
//int arr[n] = { 4, 7, 13, 21, 16, 40, 31, 9, 18, 15 };
//
// i                                 j
// 4, 7, 13, 21, 16, 40, 31, 9, 18, 15
// left           ^              right
//              pivot
//int i, j,left, right;

//int pivot;


//stack <int> stk;
//stk.push(left);
//stk.push(right);
//do{
  //  right = stk.top();
    //stk.pop();
    //left = stk.top();
    //stk.pop();
    
    //i = left;
   // j = right;
    
    //pivot = (i + j / 2);

    //do {
      //while (arr[i] < arr[pivot]){
      //++i;
      //}
      //while (arr[j] > arr[pivot]){
      //--j;
      //}
      //if (i <= j){
       //   int t;
       //   t = arr[i];
       //   arr[i] = arr[j];
        //  arr[j] = t;
        //  ++j;
        //  --j;
      //}
    //} while (i <= j);
    //if (left < j){
      //  stk.push(left);
        //stk.push(j);
  //  }
    //if (i < right){
      //  stk.push(i);
        //stk.push(right);
    //}
//} while (!stk.empty());
//for (int  i = 0; i < n; ++i) {
  ///  cout << arr[i] << " " << endl;
//}
//return 0;
//} kiedys zrobie normalnie

void quickSort (int arr[],int size){
    int i = 0, j = 0;
    int left = 0, right = 0;
    stack <int> stk;
    
    stk.push(0);
    stk.push(size-1);
    do{
        right = stk.top();
        stk.pop();
        i = left;
        j = right;
        int pivot = (left + right) / 2;
        int pivot_value = arr[pivot];
         do{
             while (arr[i]) < pivot_value){ //szuka element wiekszy od pivota
                 ++i
             }
         do{
             while (arr[j]) > pivot_value){ //szuka element mniejszy od pivota
                --j;
             }

             if (i <= j){
                 swap(arr[i],arr[j])
                 ++i;
                 --j;
             }
         } while (i <= j); // tu chcialem zeby indeks wracal na potrzebne miejsce dla dania do steku
        if(i < right){
             stk.push(i);
             stk.push(right);
        }

    }
}//wroce pozniej do tego zadania :D