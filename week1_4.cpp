//to count number of digits in an integer
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
 cout<<"number of digits in "<<number<<":"<<count;
}