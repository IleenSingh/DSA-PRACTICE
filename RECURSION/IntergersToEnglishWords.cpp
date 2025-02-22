#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,string>>mp={
    {1000000000 ,"Billion"} ,{1000000 ,"Million"} ,{1000, "Thousand"} ,{100 ,"Hundred"} ,{90 ,"Ninety"} ,{80,"Eighty"} ,{70 ,"Seventty"} ,{60 ,"Sixty"} ,{50 ,"Fifty"} ,{40 ,"Forty"} ,{30 ,"Thirty"} ,{20 ,"Twenty"} ,{19 ,"Ninteen"} ,{18 ,"Eighteen"} ,{17 ,"Seventeen"} ,{16 ,"Sixteen"} ,{15,"Fifteen"} ,{14 ,"Fourteen"} ,{13 ,"Thirteen"} ,{12 ,"Twelve"} ,{11 ,"Eleven"} ,{10,"Ten"} ,{9 ,"Nine"} , {8 ,"Eight"} ,{7 ,"Seven"} ,{6,"Six"} ,{5,"Five"} ,{4 ,"Four"} ,{3 ,"Three"} ,{2 ,"Two"} ,{1 ,"One"}};

    string numberToWords(int num){//12345
        //Base case
        if(num==0){
            return "Zero";
        }

        // first we iterate through whole make
        for(auto it:mp){
            //number ko parts mai divide krenge taaki identify krr ske ki hunss mai h millions mai ya billions
            //first part nikal lenge kis se bada h hundred millions or what?
            if(num>=it.first){
                string a=""; //first part find krne k liye ek khali
                //ab a find out krenge
                if(num>=100){
                    a =numberToWords(num/it.first)+" ";
                }
                // string b for the large or second numbers
                string b =it.second;
                //till now we find that a= 123 we solve it by recursive calls and b = thousand because of it.first provide it 

                //mow to find the remaining part we declare new empty string c and modulus the number to get it
                string c ="";
                if(num%it.first !=0){
                    c=" "+numberToWords(num%it.first);
                }
                return a+b+c;
            }
            
        }
        return "";
    }


    int main(){
        int num =123456;
        cout<<numberToWords(num);
    }