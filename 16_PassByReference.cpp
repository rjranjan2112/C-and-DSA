#include<iostream>
using namespace std;
    void doSomething(string &s){
        s[0]='J';
        cout<< s<< endl;
    }
    int main(){
        string s="Riya";
        doSomething(s);
        cout<<s<<endl; 
        return 0;
    
    }
