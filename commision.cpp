#include<iostream>
using namespace std;

int main(){
	float comm,sp,comPercent;
	cout<<"enter sales price: ";
	cin>>sp;
	cout<<"enter commision percent: ";
	cin>>comPercent;
	comm=(comPercent/100)*sp;
	cout<<"commision: "<< comm;
	return 0;
}

// the power function of cmath module is of the form pow(x,y) and returns 
// the value of x raised to power y