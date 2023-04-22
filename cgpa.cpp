#include<iostream>
using namespace std;

int main(){
	float marks[4],total,percent,cgpa;
	for(int i=0;i<4;i++){
		cout<<"enter marks in subject"<<i<<endl;
		cin>>marks[i];
		total+=marks[i];
	}
	percent=(total/4)*100;
	cgpa=percent/9.5;
	if (cgpa<=9.5){
		cout<<"cgpa: "<<cgpa;
	}
	else{
		cout<<"cgpa : 10"<<endl;
	}
	return 0;
}