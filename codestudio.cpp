#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;

    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}


int main(){
    int size;
    cout<< "enter the size of an array: ";
    cin>>size;

    int arr[10];

    for(int i=0; i<size; i++){
        cin>>arr[i];

    }

    cout<<"The Unique Ni is :"<<findUnique(arr,size);
}