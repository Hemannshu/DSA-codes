#include<iostream>
using namespace std;
void dest(int src , int des){
    if(src==des){
        cout<<" reached destination";
        return;
    }
    src++;
    dest( src ,  des);
}
int main(){
    int des;
    cout<<"enter value of destination";
    cin>>des;
    int src =1;
    cout<< endl;
    dest(src,des);
  
}