
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
///////////
