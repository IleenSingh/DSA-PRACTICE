#include<iostream>
using namespace std;

int main(){
    char ch[100] = "ileenprakash";
    char* cptr = ch;
    cout<<"Address of ch :" <<&ch<<endl;
    cout<<"cptr : "<<cptr<<endl;
    cout<<"*cptr : "<<*cptr<<endl;
    cout<<"*(cptr+3) : "<<*(cptr+3)<<endl;
    cout<<"size of cptr : "<<sizeof(cptr)<<endl;


}