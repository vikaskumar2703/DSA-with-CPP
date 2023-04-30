#include<iostream>
#include <list>
using namespace std;

int main(){
    std::list<int> myList;
    int input,sumOfodd=0,sumOfeven=0,sumOfneg=0;

    std::cout << "Enter integers to add to the list (enter 0 to stop):" << std::endl;

    // loop to input integers and add them to the list
    while (true) {
        std::cin >> input;
        if (input == 0) {
            break;
        }
        myList.push_back(input);
    }
         for (int x : myList) {
        if(x<0){
        	sumOfneg+=x;
        }
        else{
        	if(x%2==0){
        		sumOfeven+=x;
        	}
        	else{
        		sumOfodd+=x;
        	}
        }
    }
    std::cout << sumOfodd<<endl;
    cout<<sumOfeven<<endl;
    cout<<sumOfneg<<endl;
    return 0;
}