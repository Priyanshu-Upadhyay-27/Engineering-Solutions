#include<bits/stdc++.h>
using namespace std;



int main(){
    int x = 10;
    cout<<x<<endl;
    cout<<&x<<endl;
    int *p = &x;
    cout<<"p(what is stored in p) :"<<p<<endl;
    cout<<"*p(dereferencing, i.e. go to that address stored and return the value) :"<< *p<<endl;
    int *q = nullptr;
    cout << q << endl;      // prints 0
    if (q == nullptr) cout << "points to nothing" << endl; // program crashes without if condition.

}