#include<bits/stdc++.h>
using namespace std;

void insertRight(stack<int> st, int el){

}

void sortStack(stack<int>unsortedStack){
    if(unsortedStack.empty()) return;
    
    int temp = unsortedStack.top();
    unsortedStack.pop();
    sortStack(unsortedStack);
    insertRight(unsortedStack, temp);
}

int main(){
    
}