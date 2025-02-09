//g++ bubblesort.cpp -o test
//test.exe
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int len);

int main(){
    int arr[] = {-3, 6, 5, -1, 0, 9, 3};
    int len = sizeof(arr)/sizeof(int);
    
    bubble_sort(arr, len);
    
    for(int i =0; i< len; i++){
         printf("%d ", arr[i]);
    }
    system("pause");
    return 0;
}


void bubble_sort(int arr[], int len){
    for(int i=0; i< len-1; i++){
        for(int j=0; j< len-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}