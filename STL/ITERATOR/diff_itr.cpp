#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

int main(){

    //forward iterator
    forward_list<int> list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);
    //traverse using iterator
    forward_list<int>::iterator it = list.begin();
    while(it!= list.end()){
       // cout<<*it<<" ";//read operation
       (*it) =(*it) + 5;
        it++;
    }
      
      //print krega upar wale write state ment ko
     it =list.begin();
     while(it!= list.end()){
        cout<<*it<<" ";//print krega upar wale ko 
        it++;
    }

    BIDIRECTIONAL ITERATOR 
    list<int> lst;
    lst.push_back(10);
    lst.push_back(30);
    lst.push_back(50);

    //traversing through list using itr
    list<int>::iterator it =lst.begin();
     
    //forward print and read and write
    while(it!= lst.end()){
        // cout<<*it<<" ";//read
        (*it) = (*it) +2;//write operation
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //backward print
    list<int>::iterator itr= lst.end();
    while(itr != lst.begin())
    {
        itr--;
        *itr = *itr +5 ;//write operation & bckwrd print 
        cout<<*itr<<" ";     
    }
    
    //random access iterator
    vector<int> nums ={10,20,30,40,50,60,70};

    //traverse using iterator
    vector<int>::iterator it =nums.begin();
    while(it != nums.end()) {
        //write
        // *it =*it + 7;
        //read
        cout<<*it <<" ";
        //forward move
        it++;
    }

    // //RANDOM ACCESS
    // //printing the element present in thr 4th position in the vector
    vector<int>::iterator it = nums.begin()+3;
    cout<<*it<<endl;



}