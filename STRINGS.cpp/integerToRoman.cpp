#include<iostream>
using namespace std;


 string intToRoman(int num) {
        string romanSymbols[] = {"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" ,"XL" , "X" ,"IX" ,"V" , "IV" , "I"};
        int romanValues[] ={1000 ,900 ,500 ,400 ,100 ,90 ,50 ,40 ,10 ,9 ,5 ,4,1};

        //empty string to store the answer
        string result ="";

        for(int i=0 ; i<13 ; i++){
            while(num>=romanValues[i]){
                result+=romanSymbols[i];
                num-=romanValues[i];
            }
        }
        return result;
    }

    int main(){
       int num = 3749;
        cout<<"IntegerToRoman of this number -> "<<intToRoman(num);

    }