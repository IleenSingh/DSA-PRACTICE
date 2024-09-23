//leap year h ki ni pata krna h 
//condition for leap year
//divide by 4  and 100 se divide ni hona chaiye kyuki woh century hota h 
// or 400 se hona chaiye

#include<iostream>
using namespace std;

string leapYear(int leap){
    if((leap%4==0 && leap%100!=0) || leap%400==0 ){
        return "leap year";
    }
    else{
        return "not a leap year";
    }
}

int main(){
    int x=2017;
    string ans=leapYear(x);
    cout<<ans;
}