#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[5]={2,4,6,8,10};
    int odd[5]={3,5,7,9,11};
    int evenIndex=binarySearch(even, 5 , 6);
    cout<<"the index of key value is: "<<evenIndex<<endl;
    int oddIndex= binarySearch(odd , 5, 3);
    cout<<"the index of key value is: "<<oddIndex<<endl;
}
