#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> pr = {4,5};
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<int, char> p2 = {2, '1'};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, pair<int, pair<char, char>>> p3 = {1, {2, {'x', 'y'}}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second.first<<endl;

    pair<int, int> arr[] = {{1,2},{2,3},{3,4},{4,5}};
    cout<<arr[2].second<<endl;

}