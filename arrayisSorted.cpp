#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}
int main(){
    int arr[]={0,3,4,5,6};
    int size=5;
    bool finalAns= isSorted(arr, size);
    if(finalAns){
        cout << "array is sorted";
    } else {
        cout << "array is not sorted";
    }
    return 0;
}
