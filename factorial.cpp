#include<iostream>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    int small = (n-1);
    int big = n * small;
    return big;
}
int main(){
    int n;
    cin>>n;
    int ans = fac(n);
    cout<<ans<<endl;
    

}