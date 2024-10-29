 //implemention push and pop operations on stack implemented by array
 #include<bits/stdc++.h>
 using namespace std;
 class mystack{
    //properties
    int top;
    int *arr;
    int size;

    //behavious
    public:
    mystack(int size){
     this ->size=size;
     arr=new int[size];
     top=-1;
    }
    void push(int element){
   if(top<size-1){
    top++;
    arr[top]=element;
   }
   else{
    cout<<"stack overflow";
   }
    }
    void pop(int element){
     if(top>=0){
       top--;
     }
     else{
       cout<<"stack underflow";
     }
    }
    void output() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = 0; i <= top; i++) {  // Iterate up to top
                cout << arr[i] << " ";  // Print with a space
            }
            cout << endl;
        }
 }
 };
 int main(){
  mystack st(5);
  st.push(22);
  st.push(99);
  st.output();
 }