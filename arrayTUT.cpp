#include<iostream>
#include <iterator>
using namespace std;

int main(){
	// int days{};
	// cin>>days;
	// int number[days]{};
	
	// number[0]=1;
	// cout<<number[0];

int scores[]{90,90,90,90,9};
int totalScores{0};
int numOfStudents{static_cast<int>(size(scores))};

for(int student{0};student<numOfStudents;++student)
{
	totalScores+=scores[student];	
}

auto averageScore{static_cast<double>(totalScores)/numOfStudents};
cout<<averageScore;

	return 0;
}