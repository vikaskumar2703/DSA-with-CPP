#include<iostream>
using namespace std;

int main(){
	float power_consumption,hours,days=30,rate=9;
	cout<< "Enter power consumption in one hour in watt \n";
	cin>> power_consumption;
	cout<< "enter no of hours per day appliances are used\n";
	cin>> hours;
	float units=(power_consumption * hours*days)/1000;
	float bill=units*rate;
	cout<< "No of units consumed in kwh\n"<<units<<endl;
	cout<< "electricity bill \n"<<bill<<endl;
	return 0;
}