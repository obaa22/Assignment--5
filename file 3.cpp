#include <iostream>
#include <string>
using namespace std;
const int Max_size  = 50;
class stack{
    int top;
    int item[Max_size ];
    public:
    stack():top (-1) {}
    void push(int Element)
    {
    if (top >= Max_size - 1)
    {
        cout << "stack full";
    }
    else 
    {
        top++;
        item[top] = Element;
    }
    
   } 
   
   bool isEmpty()
   {
       return top < 0;
   }
   void pop()
   {
       if (isEmpty())
       {
          cout << "Stack Empty";
       }  
       else 
    {
       top--;
    }
   void print()
   {
     cout<<"[";
       for (int i = top; i >=0; i--)
       {
           cout << item[i]<<" ";
       }
       cout<<"]";
       
   }   
};

int main() 
{

stack s;
s.push (1);
s.push (2);
s.push (3);
s.push (4);
s.push (5);
s.push (6);
s.push (7);
s.push (8);
s.print();
int r = 0;
s.getTop(r);
cout<<r<<endl;


    return 0;
};
