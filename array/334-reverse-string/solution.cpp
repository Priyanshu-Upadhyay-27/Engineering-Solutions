#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1, temp;
        while(left < right){
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};

int main(){
    Solution sol;
    vector<char> arr = {'h', 'e', 'l', 'l', 'o'};
    int n = arr.size();
    cout<<"Array before reverse :"<<endl;
    for(int i = 0; i < n; i++) cout<<arr[i];
    cout<<endl;
    sol.reverseString(arr);
    cout<<"Array after reverse :"<<endl;
    for(int i = 0; i < n; i++) cout<< arr[i];
}