#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> ileen;//creation
    // vector<int> singh(10);//with specific size vector creation
    // vector<int> frooti(10,0);//intialise the first 10 elements of the vector with zero

    //begin function
      //to print the value at location we use star
      //e.g
     // cout<<*(frooti.begin())<<endl;

    // //pushback function -used to add an element at the end of the vector
    //   ileen.push_back(10);
    //   ileen.push_back(20);
    //   ileen.push_back(30);
    //   ileen.push_back(40);
      //to print size of the vector
    //   cout<<ileen.size()<<endl;
    //   cout<<ileen.front()<<endl;//returns first element
    //   cout<<ileen.back()<<endl;//returns last element
    //   ileen.pop_back();//removes element from the end
    //  cout<<ileen.size()<<endl;

     //to check whether the vector is empty or not
    //  if(ileen.empty()==true){
    //     cout<<"Vector is empty"<<endl;
    //  }
    //  else {
    //    cout<< "Vector is not empty"<<endl;
    //  }

    // cout<<ileen.at(1)<<endl;
    // cout<<ileen.max_size()<<endl;
    // ileen.insert(ileen.begin() + 3, 50);
    // cout<<ileen.size()<<endl;
    // cout<<ileen[3]<<" "<<ileen[4]<<" "<<ileen[1]<<endl;


   //iterator 
    // how to create or intialise iterator
    //mujhe vector pe traverse krne k liye iterator bnana hai 
    // vector<int>::iterator it = ileen.begin();
    //first element se intialise keediya yha se chlega iterator ab kha tkk chlega woh ? woh apn ko cond dena padega uska 

    // while(it!=ileen.end()){
    //   cout<<*it <<" "<<endl;
    //   it++;
    // }
     //*it - ek specific location pe kya h value uske liye * use krte h 

   // 2 D array creation 
  vector<vector<int>> arr(5 ,vector<int>(4 , 0) );
  //to find total number of rows , bss arr ka size return krna h kyuki bhar wala vector hi main arraybhai
  int totalRows = arr.size();
  int totalCol = arr[0].size();//jo first column ki value hofi whi saare col ki hofi isliye arr[0] mtlb first colum ka dabba jisme ek or vector 4 size ka 
    




}