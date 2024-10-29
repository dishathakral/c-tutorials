//check whether integer number is armstrong or not
#include<bits/stdc++.h>
using namespace std;
int main(){
 int number,n;
 cout<<"enter the number:";
 cin>>number;
 int count=0;
 n=number;
 while(n>0){
   n=n/10;
   count++;
 }
 cout<<count;
 cout<<endl;

 int remainder,armstrong_number=0,num;
 num=number;
 while(num>0){
 remainder=num%10;
 armstrong_number=round(pow(remainder,count))+armstrong_number;
 num=num/10;
 }
 cout<<"armstrong number is:"<<armstrong_number<<endl;
 if(number==armstrong_number){
    cout<<number<<"is armstrong number";
 }
 else{
    cout<<number<<"is not armstrong number";
 }
 
}