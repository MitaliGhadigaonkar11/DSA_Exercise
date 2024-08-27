// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the value of N: "<<endl;
//     cin>>n;

//     bool isPrime = 1;

//     for(int i = 2; i<n; i++){

//         // reminder = 0 , not prime

//         if(n%i == 0){
//             isPrime = 0;
//             break;
//         }
//     }


//     if(isPrime ==0){
//         cout<<" Not a prime Number"<<endl;
//     }
//     else{
//         cout<<" Is a prime Number"<<endl;
//     }
// }



#include<iostream>
using namespace std;
int main(){

    for(int i = 0;i<=15;i+=2){
        cout<<i<<" ";

        if(i&1){
            continue;
        }
        i++;
    }
}
