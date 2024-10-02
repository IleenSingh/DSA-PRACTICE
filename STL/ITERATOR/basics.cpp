#include<iostream>
#include<vector>
#include<forward_list>
using namespace std ;

 int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);

   //traverse
   vector<int>::iterator it=nums.begin();
   while(it!=nums.end()){
    cout<<*it<<" ";
    it++;
   }

 //forward iterator
   forward_list<int> list;
   
 }