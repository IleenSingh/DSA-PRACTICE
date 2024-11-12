string orderCopy;

//comparator function
bool cmp(char a , char b){
    return (orderCopy.find(a) < orderCopy.find(b));
    //true -> a will be placed before b
    //false -> b will be placed before a
}

string customSortString(string order , string s){
    orderCopy = order;
    sort(s.begin() , s.end() , cmp);
    return s;
}