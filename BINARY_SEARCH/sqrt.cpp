#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int sqrt(int x){
    
    int s=0;
    int e=x;
    long long int mid=s+(e-s)/2; //to prevent range error in the conditions
    int ans=-1;

    while(s<=e){
        long long int productMid =mid*mid;
        if(productMid==x){
            return mid;
        }
        if(productMid<x){
            ans=mid;//store
            s=mid+1;//compute
        }
        else{
            //productMid>x
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double precisionSqRoot(int x){
    double sqRoot=sqrt(x);
    int precision=10;
    double step=0.1;
    while(precision--){
        double j=sqRoot;
       //checling number bada h ya chota 
       while(j*j<=x){
       sqRoot=j;
        j+=step;
       }
       step/=10;
    }
    return sqRoot;

}



int main(){
    int x=69;
   
    double ans =precisionSqRoot(x);
    // cout<<ans;
    printf("Square Root is: %.10f \n",ans);
    return 0;

}