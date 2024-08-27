#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<"Entered Number is Prime Number"<<endl;
    }
    else{
        cout<<"Entered Number is Not Prime Number"<<endl;

    }
}