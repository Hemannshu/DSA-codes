#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void printThree(){
    if(cnt==3){
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    printThree();
}
int main(){
    printThree();
    return 0;
}
