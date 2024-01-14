#include<iostream>
using namespace std;
int main()
{
    int n; //Taking input form the user for iteration of program
    cin>>n;
    for(int i=0;i<n;i++){
        int s,a,b,c; //Declaring of the player sallu bhai and a,b,c
        int count=0; //Taking count variable to store lesser vlaue than s
        cin>>s>>a>>b>>c; //Taking input of the player sallu bhai and a,b,c
        if(s<a) count++; //if s is greater than a count++;
        if(s<b) count++; //if s is greater than b count++;
        if(s<c) count++; //if s is greater than c count++;
        cout<<count;
    }
 return 0;
}