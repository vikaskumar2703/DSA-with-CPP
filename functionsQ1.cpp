#include<iostream>
using namespace std;
int largest(int a,int b,int c){
		int max=a;
		if (b>max){
			max=b;
		}
		if(c>max){
			max=c;
		}
		return max;
	}
int smallest(int a,int b,int c){
		int min=a;
		if (b<min){
			min=b;
		}
		if(c<min){
			min=c;
		}
		return min;
	}

int main(){
	int a ,b,c;
	int max,mid,min;
	cin>>a;
	cin>>b;
	cin>>c;
 	cout<<largest(a,b,c)<<endl;
 	cout<<smallest(a,b,c);
	return 0;
}