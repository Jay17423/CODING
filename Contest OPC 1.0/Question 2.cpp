#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //Algorithm for GCD of Two number 
   // int a;
   // int b;
   // while(a!=b){
   //    if(a>b) a=a-b;
   //    else b= b-a
   // }
   // return a;

    int n; //Taking input form user for number of iteration of program
    cin>>n;
    for(int i=0;i<n;i++){
       int input=0;
       cin>>input; //Taking input form the for size of array
       int arr[input];
       for(int i=0;i<input;i++){
        cin>>arr[i]; //Taking input in the array
       }
       for(int i=0;i<input;i++){
        __gcd(arr[i],arr[i+1]);  //Calculating GCD of two number at a time
       }


    }
 return 0;
}