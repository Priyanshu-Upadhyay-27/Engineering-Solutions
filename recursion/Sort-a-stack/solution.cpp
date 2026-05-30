#include<bits/stdc++.h>
using namespace std;

void insertRight(stack<int> &st, int el){
    if(st.empty() || st.top() < el){
        st.push(el);
        return;
    }
    int t = st.top();
    st.pop();
    insertRight(st, el);
    st.push(t);
}

void sortStack(stack<int> &unsortedStack){
    if(unsortedStack.empty()) return;
    
    int temp = unsortedStack.top();
    unsortedStack.pop();
    sortStack(unsortedStack);
    insertRight(unsortedStack, temp);
}

int main(){
    stack<int> st;
    st.push(30);
    st.push(10);
    st.push(50);
    st.push(20);
    st.push(40);

    cout << "Original Stack (Top to Bottom): ";
    stack<int> temp = st;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortStack(st);

    cout << "Sorted Stack (Top to Bottom): ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
    
}