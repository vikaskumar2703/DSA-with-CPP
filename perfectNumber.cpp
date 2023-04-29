#include<iostream>
using namespace std;

int main(){
	int n,perfect=0;
	cin>>n;
	for (int i = 0; i <= n; i++)
	{
		if((i*i)==n){perfect=1;}
	}
perfect?(cout<<"perfect"):(cout<<"not perfect");
	return 0;
}