#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {  
         int num;
         cin>>num;
         string numb = to_string(num);
         int size = numb.size();
         if(size==2){
                int temp=numb[0];
                numb[0]=numb[1];
                numb[1]=temp;
                cout<<numb[0]<<endl;
                 }
        else if(size==1){
            cout<<numb[0]<<endl;
        }
        else{
            sort(numb.begin(),numb.end());
            cout<<numb[0]<<endl;
        }
  
    }
    
 return 0;
}