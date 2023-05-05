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
void returnPrime(int x,int y){
	for(int i=x;i<=y;i++){
		if(checkPrime(i)){
			cout<<i<<endl;
		}
	}
}
int main(){
	int x,y;
	cin>>x;
	cin>>y;
	returnPrime(x,y);
	return 0;
}