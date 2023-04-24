#include<iostream>
using namespace std;

int main(){
	int a,b,lcm;
	cin>>a;
	cin>>b;
	int minimum= min(a,b);
	for(int i=minimum;;i++){
		if(i%a==0 & i%b==0){
			cout<<"lcm:"<<i;
			break;
		}
	}
	return 0;
}