#include<iostream>
using namespace std;
int factorial(int x){
	long long int fact=1;
	if (x==0){
		fact=1;
	}
	for(long long int i=1;i<=x;i++){
		fact*=i;
	}
	return fact;	
}
int main(){
	int x;
	cin>>x;
	cout<<"factorial of given no."<< factorial(x);
	return 0;
};