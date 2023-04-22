#include<iostream>
using namespace std;

int main(){
	int a,b,hcf;
	cin>>a;
	cin>>b;
	int greater=max(a,b);
	for(int i=greater;i>0;i--){
		// cout<<i;
		if(a%i==0 & b%i==0){
			cout<<"hcf: "<< i;
			break;
		}
	}
	return 0;
}