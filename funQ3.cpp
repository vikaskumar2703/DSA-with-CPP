#include<iostream>
using namespace std;
bool voteEligibility(int age){
	if(age>=18){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int age;
	cin>>age;
	if(voteEligibility(age)){cout<<"you are eligible to vote";}
	else{cout <<"you are ineligible to vote";}
	return 0;
}