#include<iostream>
using namespace std;
int arrSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if (size==1){
        return arr[0];
    }
    int remainingPart= arrSum(arr+1, size-1);
    int sum = arr[0]+ remainingPart;
    return sum;
}
int main(){
    int arr[]={3,6,7,10,22};
    int size=5;
    int ans = arrSum(arr,size);
    cout<<"elements sum is "<<ans<<endl;
    return 0;
}
