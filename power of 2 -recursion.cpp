#include<bits/stdc++.h>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    else{
        int smallerProblem =power(n-1);
        int biggerProblem=2*smallerProblem;
        return biggerProblem;
    }
}
int main(){
    int n;
    cin >>n;
    int ans =power(n);
    cout<<ans;
    return 0;
}
