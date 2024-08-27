#include<iostream>
using namespace std;


void printArray(int arr[] ,int size){

    cout<<"Printing the array wait "<<endl;

    for(int i = 0;i<size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<" Printing done";
}



int main(){

    int fourth[10] = {12};
    int size = 10;
    printArray(fourth,10);

}