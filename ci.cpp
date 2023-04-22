#include<iostream>
#include<cmath>
using namespace std;


int main(){
	float p,r,t,ci,a;
	cout<<"enter principal: ";
	cin>>p;
	cout<<"enter rate: ";
	cin>>r;
	cout<<"enter time:\n";
	cin>>t;
	ci=p*pow((1+r/100),t);
	cout< "compound interest:\n "<<ci<<endl;
	cout<<"total amount: "<<p+ci;
	return 0;
}