#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(100);
    d.push_back(200);
    d.push_back(300);

    d.push_front(400);// 400 100 200 300

    d.pop_front();//100 200 300

    d.pop_back();//100 200 

    cout<<d.size()<<endl;
    d.insert(d.begin()+1 ,1000);
    cout<<d.at(2);

//  • begin(): Returns an iterator pointing to the first element in the deque.
// • end(): Returns an iterator pointing to the past-the-end element in the deque.
// • size(): Returns the number of elements currently in the deque.
// • empty(): Checks if the deque is empty (i.e., whether its size is 0).
// • front(): Accesses the first element in the deque.
// • back(): Accesses the last element in the deque.
// • operator[](size_type n): Accesses the element at the specified index without bounds checking.
// • at(size_type n): Accesses the element at the specified index with bounds checking.
// • push_back(const T& value): Adds an element to the end of the deque.
// • pop_back(): Removes the last element from the deque. pop_front(): Removes the first element from the deque.
// • push_front(const T& value): Adds an element to the beginning of the deque.
// • insert(iterator position, const T& value): Inserts a new element before the specified position in the deque.
// • erase(iterator position) or erase(iterator first, iterator last): Removes one or more elements from the deque starting at the specified position.
// • clear(): Removes all elements from the deque, which are destroyed, and leaves it with a size of 0.
// • swap(deque& x): Swaps the contents of the deque with those of another deque of the same type, including their sizes.

}