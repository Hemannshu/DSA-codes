#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==0 || n==1 ){
		return n;
	}
	int result1 = fibonacci(n-1);
	int result2 = fibonacci(n-2);
	int ans = result1+result2;
	
}
int main(){
	int n;
	cin>>n;
	int ans = fibonacci(n);
	cout<<ans<<endl;
}