#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<int,string> m;
//     //insertion k different methodsssssss
    //1
    m[1]= "India";
//2
    m.insert(make_pair(2 , "Australia"));
    //3
    pair<int ,string> p;
    p.first =3;
    p.second="New Zealand";
    m.insert(p);

    cout<<m.size()<<endl;
// //empty
//     if(m.empty() == true){
//         cout<<"Map is Empty"<< endl;
//     }
//     else{
//         cout<<"Map is not empty"<<endl;
//     }
//     // value change krna hona
//     m.at(2)="Brazil";
//     // at
//     cout<<m.at(2)<<endl;

//     //print krwana h saare element ko
    unordered_map<int , string>::iterator it = m.begin();
    while(it!=m.end()){
        // cout<<*it<<endl;
        cout <<  it->first << " " << it->second<<endl;
        it++;
    }
    unordered_map<string , string> um;
    um["i"] ="ileen";
    um["l"] ="leen";
    um["e"] ="een";
    // um["e"] ="en";
    um["n"] ="nn";
// • find(const Key& key): Returns an iterator to the element with the given key, or end() if the key is not found.
// • count(const Key& key): Returns the number of elements with the specified key (1 or 0 since std::map does not allow
// duplicate keys).

    // cout<<um.size()<<endl;
    if(um.find("n")!=um.end())
    {
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
// • count(const Key& key): Returns the number of elements with the specified key (1 or 0 since std::map does not allow
// duplicate keys).
//    if(um.count("l"==1)){
//     cout<<"key found"<<endl;
//    }
//    else{
//     cout<<"key not found"<<endl;
//    }
   
}

