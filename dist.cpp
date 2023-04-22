#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float x1,y1,x2,y2;
	float distance;
	cout<<"enter x of cord1 ";
	cin>>x1;
	cout<<"enter y of cord1 ";
	cin>>y1;
	cout<<"enter x of cord2 ";
	cin>>x2;
	cout<<"enter y of cord2\n";
	cin>>y2;
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"distance : " << distance;
	return 0;
}

//to explicitly cast 
// static_cast<double>(number): this explicitly converts int to