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
    
}