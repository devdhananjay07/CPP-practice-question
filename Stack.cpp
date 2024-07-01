#include<iostream>
#include<vector>
#define size 10
using namespace std;
class Array{
public:
int arr1[size];
int top = -1;
int stack2[size];
int front = 0;
public:
void push(int val)
{
    if(top >= size)
    {
       cout<<"stack overloaded"<<endl;
    }
    else
    {
       top++;
       arr1[top] = val;    
    }
}
void show(){
   cout<<"elements of stack1 are :"<<endl;
    for(int i = top;i >= 0;i--){
        cout<<arr1[i]<<endl;
    }
}
void show1(){
   cout<<"elements of stack2 are :"<<endl;
    for(int i = 0;i < front;i++){
        cout<<arr1[i]<<endl;
    }
}
void pop()
{
   if(top >= size)
   {
    cout<<"stack underflow"<<endl;
   }
   else
   {
   cout<<"top element is "<<arr1[top]<<endl;
   top--;
   stack2[front] = arr1[top];
   front++;
   }
}
void empty()
{
 if(top == -1)
 {
 cout<<"empty stack1"<<endl;
 }
 else
 {
 cout<<"not empty"<<endl;
 }
}
};
int main(){
   Array stack;
   int arr[size]={1,3,5,7,9,2,4,6,8};
   stack.empty();
   stack.push(arr[0]);
   stack.push(arr[1]);
   stack.push(arr[2]);
   stack.push(arr[3]);
   stack.push(arr[4]);
   stack.push(arr[5]);
   stack.show();
   cout<<"printing top element"<<endl;
   stack.pop();
   stack.pop();
   stack.pop();
   stack.pop();
   stack.pop();
   stack.pop();
   stack.show();
   stack.show1();
   return 0;
}
