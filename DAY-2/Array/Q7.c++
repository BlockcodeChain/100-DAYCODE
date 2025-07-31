// binary search in ascending order 
#include<iostream>
#include<vector>
using namespace std;

// Binary Search Function
int Binary_Ascending(int n, vector<int>& v, int key) {
    int s = 0, e = v.size() - 1;
    while(e >s) {
        int mid = s + (e - s) / 2;
        if(v[mid] == key) {
            return mid;
        }
        else if(v[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int num;
    cout << "Enter number of elements: ";
    cin >> num;

    vector<int> v;
    cout << "Enter sorted elements (ascending order): ";
    for(int i = 0; i < num; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    int index = Binary_Ascending(num, v, key);
    
    if(index == -1) {
        cout << "Element not found.\n";
    } else {
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}
