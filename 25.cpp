#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	map<string,int> months;
	string month;
	cin>>month;
	months["August"]=31;
	month[s"February"]=28;
	int evenDays=0;
	for(int i=1;i<=months[month];i++){
		if(i%2==0){
			evenDays++;
		}
	}
	cout<<"no of even days in "<<month<<" : "<<evenDays;
	return 0;
}