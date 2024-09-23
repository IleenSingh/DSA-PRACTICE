#include<iostream>
#include<set>
using namespace std;

int main(){

    //cteation
    set<int> s;
    //insertion
    s.insert(12);
    s.insert(44);
    s.insert(22);
    s.insert(100);
    s.insert(22);

    //traverse
    set<int>::iterator it= s.begin();

    //condition for traversing
    while(it!=s.end()){
        cout<<*it <<" ";
        it++;

    }
    cout<<s.size()<<endl;


    //find
    if(s.find(22)!=s.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found";
    }

    //count
    if(s.count(22)==0){
        cout<<"key not found";
    }
    if(s.count(22)==1){
        cout<<"count ->"<<"key found";
    }
// begin(): Returns an iterator pointing to the first element in the set.
// • end(): Returns an iterator pointing to the past-the-end element in the set.
// • empty(): Checks if the set is empty (i.e., whether its size is 0).
// • size(): Returns the number of elements currently in the set.
// • insert(const T& value): Inserts a new element into the set, maintaining the order and uniqueness of
// elements.
// • erase(const T& key) or erase(iterator position) or erase(iterator first, iterator last): Removes one or more
// elements from the set specified by key or position.
// • clear(): Removes all elements from the set, which are destroyed, and leaves it with a size of 0.
// • find(const T& key): Returns an iterator to the element with the given key, or end() if the key is not found.
// • count(const T& key): Returns the number of elements with the specified key (1 or 0, since std::set does
// not allow duplicate keys).
}