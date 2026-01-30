#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);


    // vector<pair<int, int>> vec;
    // vec.push_back({3, 4});
    // vec.emplace_back(5,6);

    // for(auto x : vec){
    //     cout<< x.first << endl;
    // }
    // for(int i = 0; i< v.size(); i++){
    //     cout<<v[i]<<endl;
    // }
    // vector<int> v1(5);
    // for(int i = 0; i< v1.size(); i++){
    //     cout<<"Vector Elements :"<<v1[i]<<endl;
    // }
    vector<int>::iterator i = v.end();
    i--;
    cout<<"Memory Address: "<<(&*i)<<endl<<"Element: "<<*(i);
}