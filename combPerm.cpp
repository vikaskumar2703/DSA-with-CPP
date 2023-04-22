#include<iostream>
using namespace std;
int factorial(int x){
	int fact=1;
	if(x==0){
		fact=1;
	}
	else{
	for(int i=1;i<=x;i++){
		fact*=i;
	}}
	return fact;
}

int main(){
	int n,r,com,per;
	cout<<"enter n ";
	cin>>n;
	cout <<"enter r ";
	cin>>r;
	com=factorial(n)/(factorial(n-r)*factorial(r));
	cout<<"combination	"<<com<<endl;
	per=factorial(n)/factorial(n-r);
	cout<<"permutation"<<per;
	return 0;	
}