#include<iostream>
#include <iterator>
using namespace std;

int main(){
	// int days{};
	// cin>>days;
	// int number[days]{};
	
	// number[0]=1;
	// cout<<number[0];

// int scores[]{90,90,90,90,9};
// int totalScores{0};
// int numOfStudents{static_cast<int>(size(scores))};

// for(int student{0};student<numOfStudents;++student)
// {
// 	totalScores+=scores[student];	
// }

// auto averageScore{static_cast<double>(totalScores)/numOfStudents};
// cout<<averageScore;

// C-style Strings
	char mystring[]{"string"};
	int length{ static_cast<int>(size(mystring))};
	cout<<"the length of string is "<<length<<"\n";
	for(int index{0};index<length;++index){
		cout <<static_cast<int>(mystring[index])<<" ";
		cout<< "\n";
	}
	
	return 0;
}