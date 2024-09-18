#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[], int n){
  unordered_map<int,int>map;
  for (int i=0;i<n;i++){
      map[arr[0]]++;
  }
}
int main(){
  int arr[]={1,2,3,3,1,10,13,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  Frequency(arr,n);
  return 0;
}
