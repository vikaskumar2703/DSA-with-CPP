#include<iostream>
using namespace std;
int largest(int a,int b,int c){
		int max=a;
		if (b>max){
			max=b;
		}
		if(c>max){
			max=c;
		}
		return max; 
	}

void checkTriplet(int x,int y,int z){
	// max=largest(x,y,z);
	if (x*x==(y*y+z*z)){
		cout<<"triplet" ;
	}
	else {cout<<" not triplet";}
}
int main(){
	int x,y,z;
	cout<<"enter hypotenuse first"<<endl;
	cin>> x;
	cin>> y;
	cin>> z;
	checkTriplet(x,y,z);
	return 0;
}