#include <iostream>
using namespace std;

const int N = 50;

bool isEmpty(int top) {
    return top == -1;
}

bool isFull(int top, int n) {
    return top == n - 1;
}

bool push(int arr[], int &top, int n, int element) {
    if (isFull(top, n)) return false; 
    top++;
    arr[top] = element;
    return true;
}

bool pop(int &top) {
    if (isEmpty(top)) return false;  
    top--;                      
    return true;
}

bool peek(const int arr[], int top, int &value) {
    if (isEmpty(top)) return false;
    value = arr[top];
    return true;
}

int main() {
    int arr[N];
    int top = -1;
    int val;

    cout << "pop on empty: " << pop(top) << endl;            // 0
    cout << "peek on empty: " << peek(arr, top, val) << endl; // 0

    push(arr, top, N, 10);
    push(arr, top, N, 20);
    push(arr, top, N, 30);

    if (peek(arr, top, val)) cout << "top = " << val << endl; // 30
    cout << "size = " << top + 1 << endl;                     // 3

    pop(top);
    pop(top);
    pop(top);
    cout << "empty after 3 pops: " << isEmpty(top) << endl;   // 1

    for (int i = 0; i < N; i++) push(arr, top, N, i);
    cout << "full: " << isFull(top, N) << endl;               // 1
    cout << "push when full: " << push(arr, top, N, 99) << endl; // 0

    return 0;
}