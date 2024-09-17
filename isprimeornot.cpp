#include<iostream>
#include<cmath>
using namespace std;
bool checkPrime(int n){
    int count =0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count ++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
};
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int isPrime=checkPrime(n);
    if(isPrime){
        cout<<n<<"is a prime number";
    }
    else{
        cout<<n<<"is not a prime number";
    }
    
}
