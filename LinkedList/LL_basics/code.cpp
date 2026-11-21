#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *ptr;
};

int main() {
    Node *n1 = new Node; // address of the struct or the memory created in the heap. stored in n1
    n1->val = 1;
    n1->ptr = nullptr;
    
    Node *n2 = new Node;
    n2->val = 2;
    n2->ptr = nullptr;
    n1->ptr = n2;
    
    Node *n3 = new Node;
    n3->val = 3;
    n3->ptr = nullptr;
    n2->ptr = n3; 

    cout << n1->val << endl;         // 10
    cout << n1->ptr->val << endl;   // 20
    cout << n1->ptr->ptr->val << endl;
    cout << (n1->ptr->ptr->ptr ? to_string(n1->ptr->ptr->ptr->val) : "NULL") << endl;

}