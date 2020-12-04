/*My Name : Maab Ahmed Omer Ali 
Class : second 
Department : Computer
*/
#include <iostream>
using namespace std;

int main() {
int p;
cin>>p;
switch (p)
{
    case 1:
    cout<<"linked list ";
     break;
     case 2:
     cout<<"Stack";
     break;
     case 3:
     cout<<"Queue";
     break;
     default:
     cout<<"is out ";
     break;
}


    return 0;
};
//////////////////
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
//////////////////////////////
#include <iostream>
#include <string> 
using namespace std;
const int Max_LENGTH=40;
class arryqueue
{
 int rear;
 int front;
 int length;
 int arr[Max_LENGTH ];  
 public:
 arryqueue()  {
     front = 0;
     rear = Max_LENGTH - 1;
     length = 0;
 }
  bool isEmpty() 
  {
      return length == 0;
  }
   
   bool isFull()
   {
       return length == Max_LENGTH ;
   }
   void addQueue(int Element) 
  {
      if (isFull() )
      {
          cout << "Queu Full";
      }
      else 
      {
          rear = (rear + 1)% Max_LENGTH ;
          arr[rear]= Element ;
          length++;
      }
  } 
  
 void deleteQueue()  
 {
     if (isEmpty() )
     {
         cout << "Empty Queue";
     }
     else 
     {
         front = (front + 1) % Max_LENGTH ;
         length--;
     }
 }
 void printQueue()
 {
     cout<<"[";
     for (int i = front; i != rear+1; i=(i+1)%Max_LENGTH)
{
    cout << arr[i];
}     
cout<<"]";
 }
};

int main() {
arryqueue  q1;
q1.addQueue(10);
q1.addQueue(20);
q1.addQueue(30);
q1.addQueue(40);
q1.addQueue(50);
q1.deleteQueue(40);
q1.deleteQueue(30);
q1.printQueue();


    return 0;
};
////////////
