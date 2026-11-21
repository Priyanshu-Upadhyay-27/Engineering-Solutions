#include<bits/stdc++.h>
using namespace std;

void byValue(int a)      { a = 99; }
void byPointer(int *a)   { *a = 99; }
void byReference(int &a) { a = 99; }

int main() {
    int x = 10, y = 10, z = 10;
    byValue(x); // Original x will remain unchanged, another copy of x get a value as 99.
    byPointer(&y); // Here orignal value will be changed, as first the address is stored in the parameter, but later, it is derefrenced inside the func and overidden as 99.
    byReference(z); // &a here means referencing, meaning a is another name of z, i.e. both contains 99.
    cout << x << " " << y << " " << z << endl;
}