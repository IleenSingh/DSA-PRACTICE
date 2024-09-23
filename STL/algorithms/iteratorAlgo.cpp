#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
 
void ddouble(int a){
    cout<<2*a<<" ";

}

bool checkEven(int a){
    return a%2==0;
}

int main(){
    // vector<int> vi(5);
    // vi[0]=10;
    // vi[1]=10;
    // vi[2]=7;
    // vi[3]=40;
    // vi[4]=35;

    //for_each range mai fun apply krne k liye
    // for_each(vi.begin() , vi.end() , ddouble);

    //find
    // int findEle=30;
    // //print krane k liye iterator return krna h 
    // auto it =find(vi.begin() , vi.end() ,findEle);
    // cout<<*it<<endl;

    //find-if
    // auto it = find_if(vi.begin() , vi.end() ,checkEven);
    // cout<<*it<<endl;

    //count
    // int element=3;
    // int answer = count(vi.begin() ,vi.end() ,element);
    // cout<<answer<<endl;

    //count_if
    // int answer =count_if(vi.begin() , vi.end() ,checkEven);
    // cout<<"answer "<<answer<<endl;

    // sort
    // sort(vi.begin() , vi.end() );
    // for(auto i : vi){
    //     cout<<i<<" ";
    // }
   //Element Access: vi[i] is used to access the element at the index i in the vector, but not to iterate over the vector.

   //reverse
//    reverse(vi.begin() ,vi.end());
   

   //before rotate
//    cout<<"Before rotate "<<endl;
//     for(auto i : vi){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     //rotate
//     //after rotate
//     cout<<"After rotate "<<endl;

//     rotate(vi.begin() ,vi.begin()+3 ,vi.end());
//     for(auto i : vi){
//         cout<<i<<" ";
//     }

//unique
//  auto it =unique(vi.begin() ,vi.end());
// //  it k baad se saare element vector k duplicate honge
// // vi.erase(it,vi.end());
// for(auto i:vi){
//     cout<<i<<" ";
// }

// partition
//   auto it = partition(vi.begin() , vi.end() ,checkEven);
//   for(int i:vi){
//     cout<<i<<" ";
//   }




                      //NUMERIC ALGORITHM

//accumulate
// int totalSum =accumulate(vi.begin() ,vi.end() ,0);
// cout<<totalSum<<endl;
 
 //inner product
//  vector<int> one={1,2,3,4,5};
//  vector<int> two={1,2,3,4,5};
  
//   int answer =inner_product(one.begin() ,one.end() ,two.begin(),0);
//   cout<<answer<<endl;
  //1*1 +2*2 +3*3 +4*4+ 5*5 =55

//partial sum
// vector<int> result(one.size());
// partial_sum(one.begin() , one.end() ,result.begin());
// for(int i:result){
//     cout<<i<<" ";
// }
// cout<<endl;

//iota
// vector<int> first(5);
// iota(first.begin() , first.end() ,100);
// for( auto i:first){
//     cout<<i<<" ";
// }




                     //SEARCHING AND FINDING ALGORITHM

//BINARY SEARCH
// vector<int> nums={10,33,55,505,555};
// int target =505;
// auto it =binary_search(nums.begin() ,nums.end() ,target);
// cout<<it<<endl;
// 1 toh true 0 toh false mtlb ni h target given range mai

//lower bound
vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
nums.push_back(50);
nums.push_back(60);

// int target=40;
// auto it=lower_bound(nums.begin(),nums.end() ,target);
// cout<<*it<<endl;

// auto it=upper_bound(nums.begin(),nums.end() ,target);
// cout<<*it<<endl;

// make_heap(nums.begin() , nums.end());
  
//   for(int i:nums){
//     cout<<i<<" "; 
//   }


                      //SET ALGORITHM


                      



}