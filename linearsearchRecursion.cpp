#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size , int key){
    if(size == 0){
        return false;  
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1, size-1 , key);
        return remainingPart;
    }
    
}
int main(){
    int arr[]={0,1,2,3,4,5};
    int size =5;
    int key = 10;
    int ans =linearSearch(arr, size , key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"absent ";
    }
}
