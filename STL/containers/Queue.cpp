#include<iostream>
#include<queue>
using namespace std;

int main(){

  queue <int> q;
  // • push(const T& value): Adds an element to the end of the queue.
  q.push(100);
  q.push(200);
  q.push(300);
// • pop(): Removes the first element from the queue.
  q.pop();
  cout<<q.front()<<" "<<q.back();
  
// .empty(): Checks if the queue is empty (i.e., whether its size is 0).
// • size(): Returns the number of elements in the queue.
// • front(): Accesses the first element in the queue, which is the next element to be removed.
// • back(): Accesses the last element in the queue, which is the most recently added element.

// • swap(queue& x): Swaps the contents of the queue with those of another queue of the
// same type.
}