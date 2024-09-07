#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s , int e , int k){
    if(s>e){
        return false;
    }
    int mid= s +(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        binarySearch(arr, mid+1, e, k);
    }
    if(arr[mid]>k){
        binarySearch(arr, s , mid , k);
    }
}
int main(){
    int arr[6]={1,2,3,4,10,12};
    int size= 6;
    int k= 10;
    bool ans = binarySearch(arr, 0, 5,10);
    if(ans){
        cout<<"present";

    }
    else{
        cout<<"absent";
    }
}
