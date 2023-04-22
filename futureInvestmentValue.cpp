#include<iostream>
#include <math.h>
using namespace std;

int main(){
	float fv,pv,rate,n;
	cin>>pv;
	cin>>rate;
	cin>>n;
	fv=pv*pow((1+rate),n);
	cout<<fv;
	return 0;
}