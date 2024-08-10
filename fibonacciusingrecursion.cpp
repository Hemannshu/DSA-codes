#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    int result1 = fib(n-1);
    int result2= fib(n-2);
    int result = result1 + result2;
    return result;
}

int main() {
    int n;
    cin>>n;
    int ans = fib(n);
    cout<< ans<<endl;
    
}