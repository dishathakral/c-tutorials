//infix to postfix
#include<bits/stdc++.h>
using namespace std;
int priority(char c) {
    if (c == '^') // Highest precedence
        return 3;
    else if (c == '*' || c == '/') // Next highest
        return 2;
    else if (c == '+' || c == '-') // Lowest among operators
        return 1;
    else
        return 0; // Parentheses and non-operators
}
string inftopost(string s){
 stack<char>st;
 string ans="";
 int i=0;
 int n=s.length();
 for (char ch : s){
     if (isalnum(ch)){
        ans+=ch;
     }
     else if(s[i]=='('){
        st.push(ch);
     }
 }


}
