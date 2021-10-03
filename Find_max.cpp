#include<iostream>
 using namespace std;
 int main()
 {
     int num1,num2,num3;
     cout<<"Enter Three Numbers"<<endl;
     cin>>num1;
     cin>>num2;
     cin>>num3;
     if(num1>num2)
     {
        if(num1>num3)
          {
            cout<<num1;
          } 
        else
             cout<<num3<<endl;    
     }
     else 
     {
         if(num2>num3)
          {
            cout<<num2<<endl;
          } 
        else
             cout<<num3<<endl; 
     }
     cout<<"Done with Find_max"<<endl;
     cout<<"Changes in dev"<<endl;
     return 0;
 }