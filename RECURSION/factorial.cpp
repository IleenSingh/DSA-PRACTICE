#include<iostream>
using namespace std;

int Factorial(int n){
    //base case 
    //jo pata h answer whi aaega or we can say jo infinite loop mai jane se rokega or stack overflow se bachega
    if(n==0 || n==1){
        return 1;
    }
    //recursive call
    //jo baar recursive call krega function ko
    //main formula -> fact(n) =n * fact(n-1)
    //ab isme n mujhe find out krna hai or fact (n-1) recursion krega toh dono one by one findout krenge

    int recursionPart = Factorial(n-1);
    int Answer = n * recursionPart ;
    return Answer ;
}


int main(){
    int n;
    cout<<"Enter the number-> "<<endl;
    cin>>n;
    int ans = Factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
}