#include<iostream>
using namespace std;

int main(){
	int n,originalNum,remainder,result=0;
	//enter a no
	cin>>n;
	originalNum=n;
	while(originalNum!=0){
		remainder=originalNum%10;
		result+=remainder*remainder*remainder;
		// cout<<result<<endl;
		originalNum/=10;
	}
	// cout << result;
	if(result==n){
		cout<<"ARMSTRONG";
	}
	else{
		cout<< "not armstrong";
	}
	return 0;

}