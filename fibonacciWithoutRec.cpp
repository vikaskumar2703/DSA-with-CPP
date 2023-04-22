#include<iostream>
using namespace std;
int main(){
	int x; // no of terms in series
	cin>> x; 
	int a=0,b=1,c,i;
	for(i=0;i<=x;i++){
	if (i<=1){
		cout << i<<" ";
	}
	else{
		c=a+b;
		a=b;
		b=c;
		cout <<" "<< c;
	}
}
	return 0;
}