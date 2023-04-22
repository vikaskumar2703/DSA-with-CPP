#include<iostream>
using namespace std;

int main(){
	float runs,sum=0,avg;
	int gotOut;
	cout<< "enter the runs scored in last 5 matches\n";
	for(int i =0 ; i<5;i++){
	cin>>runs;
	sum+=runs;
}
cout<<"no of times batsman got out\n";
cin>>gotOut;
avg=sum/gotOut;
cout<<"batting average:"<<avg<<endl;
return 0;
}