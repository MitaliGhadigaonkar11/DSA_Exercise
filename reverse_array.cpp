#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6]={1,3,5,7,9,4};
    int arr2[5]={12,34,54,6,23};

    reverse(arr1,6);
    reverse(arr2,5);

    printArray(arr1 , 6);
    printArray(arr2 , 5);

    return 0;
}