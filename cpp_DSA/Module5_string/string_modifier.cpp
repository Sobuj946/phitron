#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    s="Hello world";
    string p="Hi";
    // s+=p;
    // cout<<s<<endl;


    //string append function using to add the string
    // s.append(p);
    // cout<<s<<endl;

    //using push_back() this function push the value last index value add
    // s.push_back('a');
    // cout<<s<<endl;

    //string last char delete using the pop_back() function
    // s.pop_back();
    // cout<<s<<endl;

    //assign the value 

    // s="sobuj chandra";
    //using function assign()
    // s.assign("hello");


    //erase function using the delete operation 
    // s.erase(); //all value delete the function
    //if s.erase(3) 3 index value to delete last  index
    // s.erase(3); 
    //if s.erase(3,5) 3 to 5 index delete  the string
    // s.erase(3,5);


    //replace(index,delete charater number,replace string)
    // s.replace(6,5,"Bangladesh");

    //insert() function
    s.insert(6,"sobuj");
    cout<<s<<endl;

    return 0;
}