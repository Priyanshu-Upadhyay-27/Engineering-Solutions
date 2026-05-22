#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr, int temp, int depth);
void sort(vector<int> &arr, int depth);

void printIndent(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "  ";
    }
}

void sort(vector<int> &arr) {
    sort(arr, 0);
}

void sort(vector<int> &arr, int depth) {
    printIndent(depth);
    cout << "sort(";
    for (int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i];
        if (i + 1 < (int)arr.size()) cout << ", ";
    }
    cout << ")" << endl;

    if(arr.size() <= 1) return;
    int temp = arr[arr.size() - 1];
    printIndent(depth);
    cout << "pick " << temp << endl;
    arr.pop_back();
    sort(arr, depth + 1);
    insert(arr, temp, depth + 1);

}
void insert(vector<int> &arr, int temp, int depth){
    printIndent(depth);
    cout << "insert(" << temp << ") into [";
    for (int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i];
        if (i + 1 < (int)arr.size()) cout << ", ";
    }
    cout << "]" << endl;

    if(arr.size() == 0 || arr[arr.size() - 1] <= temp){
        arr.push_back(temp);
        printIndent(depth);
        cout << "push " << temp << endl;
        return;
    }
    int val = arr[arr.size() - 1];
    printIndent(depth);
    cout << "pop " << val << endl;
    arr.pop_back();
    insert(arr, temp, depth + 1);
    arr.push_back(val);
    printIndent(depth);
    cout << "restore " << val << endl;
}

int main() {
	vector<int> arr = {5, 2, 9, 1, 6};
    int n = arr.size();

    sort(arr);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
