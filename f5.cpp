#include<iostream>
using namespace std;
bool checkPrime(int x){
	bool a= true;
	if (x==1){
		a=false;
	}
	for (int i=2;i<x;i++){
		if (x%i==0){
			a=false;
			break;
		}
	}
	return a;
}
int main(){
	int x;
	cin>> x;
	if(checkPrime(x)){cout<<"prime";}
	else{cout<<"not prime";}

	return 0;
}