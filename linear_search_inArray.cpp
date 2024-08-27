#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i = 0; i<size; i++){

        if(arr[i] == key){
            return 1;
        }
    }
    return 0;


}

int main(){
    int arr[10]= {5,7,11,45,6,8,4,9,10,23};
    
    cout<<"Enter the element that you want to search in an array: "<< endl;

    int key;
    cout<< " Enter element"<<endl;
    cin>>key;

    bool found = search(arr,10,key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
        }
    return 0;
}
