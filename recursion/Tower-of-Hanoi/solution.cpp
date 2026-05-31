#include<bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n, int& count){
    if(n == 1){
        cout<< "Step " << count << ":"<<"Moving "<<n<<" plates from tower "<<s<<" to tower "<<d<<endl;
        return;
    }
    solve(s, h, d, n - 1, count);
    count++;
    cout<< "Step " << count << ":"<<"Moving "<<n<<" plates from tower "<<s<<" to tower "<<d<<endl;
    solve(h, d, s, n - 1, count);
}

int main(){
    int s = 1, h = 2, d = 3, n, count = 0;
    cout<<"Enter the number of plates :"<<endl;
    cin>>n;
    solve(s, d, h, n, count);
    cout << "\nTotal moves required: " << count << endl;
}
