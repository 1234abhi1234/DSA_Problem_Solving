#include<iostream>
using namespace std;
    void printArr(int *arr, int n){
            for(int i = 0; i<n; i++){
                cout << arr[i]<< ",";
            }
            cout<<endl;
      } 

// int main(){
//     int arr[] = {5, 4, 3, 2, 1};
//     int n = sizeof(arr) / sizeof(int);

//     int copyArr[n];
//     for(int i = 0; i<n; i++){
//         int j = n-i-1;
//         copyArr[i] = arr[j];
//     }
//     for(int i = 0; i<n; i++){
//         arr[i] = copyArr[i];
//     }
//     printArr(arr, n);
//     return 0;
// }


//       int main(){
//         int arr[] = {5, 4, 3, 2, 1};
//         int n = sizeof(arr) / sizeof(int);

//         int start = 0, end = n-1;
//         while(start <end){

//         swap
//             int temp = arr[start];
//             arr[start] = arr[end];
//             arr[end] = temp;

//             start++;
//             end--;
//         }
//         printArr(arr, n);
//         return 0;
// }


   int main(){
        int arr[] = {6, 5, 4, 3, 2, 1};
        int n = sizeof(arr) / sizeof(int);

        int start = 0, end = n-1;
        while(start <end){

        //swap
           swap(arr[start],arr[end]);

            start++;
            end--;
        }
        printArr(arr, n);
        return 0;
}




// void printArr(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         cout << arr[i]<< ",";
//     }
//     cout<<endl;

// }
