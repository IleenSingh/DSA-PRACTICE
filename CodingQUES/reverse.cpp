#include<iostream>
using namespace std;

int reverse(int num){
    int reverseNum=0;
    while(num!=0){
        int digit=num%10;//e.g 240--> 240%10->0  2)24%10=4
        reverseNum = reverseNum * 10 + digit;//0*10+0;  2)0*10+4=4
        num=num/10;//240/10=24 which is not equal to zero 2)24/10=2 !=0 
    }
    return reverseNum;
}

int main(){
    int num=567000;
    int ans=reverse(num);
    cout<<"REVERSE OF THE NUMBER IS -> "<<ans;
}