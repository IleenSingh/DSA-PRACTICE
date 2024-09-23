//find the longest string in the list of strings




#include<iostream>
#include<vector>
using namespace std;

string findLONGESTstring(vector<string> &arr){
    string longestStr="";//empty string
    //loop check krne k liye har elemnt ko

    for(auto i :arr){
        if(i.length()>longestStr.length()){
            longestStr=i;
        }

    }
    return longestStr;

}

int main(){
    vector<string> arr={"apple" ,"banana","grapes","pomogranate"};
    string longestSTRING = findLONGESTstring(arr);
    cout<<longestSTRING<<endl;
}