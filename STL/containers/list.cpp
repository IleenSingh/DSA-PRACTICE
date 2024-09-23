#include<iostream>
#include<list>
using namespace std;

int main(){

  //creation
//   list<int> myList;
//   //insertion
//   // • push_back(const T& value): Adds an element to the end of the list.
//   myList.push_back(10);
//   myList.push_back(20);
//   myList.push_back(30);
//   myList.push_back(40);
//   myList.push_back(50);
// // • push_front(const T& value): Adds an element to the beginning of the list.
//   myList.push_front(60);
//   myList.push_front(70);
// • pop_back(): Removes the last element from the list.
// • pop_front(): Removes the first element from the list.
//   myList.pop_front();

// • clear(): Removes all elements from the list, which are destroyed, and leaves it with a size of 0.
   //myList.clear();

// • empty(): Checks if the list is empty (i.e., whether its size is 0).

// if(myList.empty()==true){
//     cout<<"list is empty"<<endl;
// }
// else{
//     cout<<"list is not empty";
// }

// • front(): Accesses the first element in the list.
//   cout<<myList.front()<<endl;
// • back(): Accesses the last element in the list.
//   cout<<myList.back();



// • size(): Returns the number of elements in the list.
// cout<<myList.size()<<endl;

//iterator
// • begin(): Returns an iterator pointing to the first element in the list.
// • end(): Returns an iterator pointing to the past-the-end element in the list.

// list<int>::iterator it =myList.begin();
// //traverse with the help of iterator
//      while(it!=myList.end()){
//         cout<<*it<<endl;
//         it++;
//      }

// • swap(list& x): Swaps the contents of the list with those of another list of the same type, including their sizes.
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

     list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);
    list<int>::iterator it =first.begin();
    //traverse with the help of iterator
     while(it!=first.end()){
        cout<<*it<<" ";
        it++;
        
     }
     cout<<endl;

   
// • insert(iterator position, const T& value): Inserts a new element before the specified position in the list.
    second.insert(second.begin(),100);
      list<int>::iterator itt =second.begin();
    //traverse with the help of iterator
     while(itt!=second.end()){
        cout<<*itt<<" ";
        itt++;
     }

// • erase(iterator position) or erase(iterator first, iterator last): Removes one or more elements from the list starting at the specified position.
// • remove(const T& value): Removes all elements from the list that are equal to the specified value.
}