// apn ko rotate krne k liye 3 chiz krna h sabse phle ek temp variable bnana h or jitne bhi element ko shift krna h usko store krke 
// dusre step mai jo baki original array k elements h usko hmme aage shift krna h 
// third step mai temp mai jo element store the array ko wapis se array mai add krna h starting k index mai

#include <iostream>
using namespace std;

int rotateArray(int arr[] , int size ,int shift){
    // agar shift ka size bda hojata h toh complications se bchne k liye mod use krrte h 
    int finalShift=shift%size;

    if(finalShift==0){
        // return ;
        // no change
    }
    //step 1 shift elements ko temp pe store krwaana h
    int temp[1000];
    int index=0; 
    for(int i=size-finalShift ;i<size ;i++){
       temp[index]=arr[i];
        index++;
    }

    // step2 ab jo elements bche h array mai unko aage shift krna h 
    for(int i=size-1; i>=0; i--){
        if(i-finalShift>=0){
            arr[i]=arr[i-finalShift];
        }
    }

    //temp elements ko wapis original array mai dalna h
    for(int i=0 ;i<finalShift ;i++){
        arr[i]=temp[i];
}
}



int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int shift=2;
    cout<<"before shifting"<<endl;
    for(int i=0 ;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArray(arr,size,shift);
    cout<<"After shifting"<<endl;
    for(int i=0 ;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}