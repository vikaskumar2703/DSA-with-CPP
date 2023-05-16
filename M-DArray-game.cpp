#include<iostream>
using namespace std;
int main(){
int space[4][4]={
    {0,0,1,0},
    {0,1,1,0},
    {0,0,0,1},
    {0,0,0,1}
};
// 1 represents ships
int hits=0;
int noOfTurns=0;

while(hits<4){
    int row,column;
    cout<<"enter a row\n";
    cin>>row;
    cout<<"enter a column\n";
    cin>>column;
    if (space[row][column]){
        space[row][column]=0;
        hits++;
        cout<<"hit"<<"you have "<<(4-hits)<<" left\n";
        noOfTurns++;
    }
    else{
        cout<<"Miss\n";
        noOfTurns++;
    }
}
cout<<"Victory\n";
cout<<"you won in "<<noOfTurns;
return 0;
}