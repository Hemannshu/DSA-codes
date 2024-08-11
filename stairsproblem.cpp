#include<iostream>
using namespace std;
int stairs(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int step1=stairs(n-1);
    int step2= stairs(n-2);
    int step= step1+step2;
    return step;

}
int main(){
    int n;
    cin>>n;
    int ans = stairs(n);
    cout<<ans<<endl;
}

