#include<bits/stdc++.h>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s;
    s.roll = 1;
    s.marks = 90.5;

    Student *p = &s;
    cout << s.roll << endl;
    cout << (*p).roll << endl;
    cout << p->roll << endl;    // same as (*p).roll
    p->roll = 5;
    cout << s.roll << endl;     // 5
}