#include<iostream>
using namespace std;
void oddEven(int x){
	if (x%2==0){cout<<"even";}
	else{cout<<"odd";}
}
int main(){
	int a;
	cin>>a;
	oddEven(a);
	return 0;
}