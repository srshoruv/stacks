#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void nextGreater(vector<int> arr) {
    stack<int> s;
    int n = arr.size();
    vector<int> ans(n);
    int idx = arr.size() - 1;
    ans[idx] = -1;
    s.push(arr[idx]);

    for (idx = idx-1; idx>=0; idx--) {
        int currNum= arr[idx];

        while(!s.empty() && currNum >= s.top()) {
            s.pop();
        }

        if (s.empty()) {
            ans[idx] = -1;
        } else {
            ans[idx] = s.top();
        }

        s.push(currNum);
}
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << ",";
    } cout << endl;
}



int main() {
    // Test Case 1: Regular case with distinct elements
    vector<int> arr1 = {4, 5, 2, 25};
    // Expected output: [5, 25, 25, -1]

    // Test Case 2: Case with all elements in descending order
    vector<int> arr2 = {13, 7, 6, 12};
    // Expected output: [-1, 12, 12, -1]

    // Test Case 3: Case with all elements in ascending order
    vector<int> arr3 = {1, 2, 3, 4};
    // Expected output: [2, 3, 4, -1]

    // Test Case 4: Case with repeated elements
    vector<int> arr4 = {1, 3, 2, 1, 2, 3};
    // Expected output: [3, -1, 3, 2, 3, -1]

    // Test Case 5: Single element
    vector<int> arr5 = {10};
    // Expected output: [-1]

    // Test Case 6: Case with negative numbers
    vector<int> arr6 = {1, -3, -2, 4, -1};
    // Expected output: [4, -2, 4, -1, -1]
    

    nextGreater(arr1);
    nextGreater(arr2);
    nextGreater(arr3);
    nextGreater(arr4);
    nextGreater(arr5);
    nextGreater(arr6);

    return 0;
}
