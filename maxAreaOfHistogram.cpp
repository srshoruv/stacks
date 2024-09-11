#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void maxArea(vector<int> vec) {
    int n = vec.size();
    vector<int> nsr(n);
    vector<int> nsl(n);
    stack<int> st;

    //next smaller left
    nsl[0] = -1;
    st.push(0);

    for (int i=1; i<n; i++) {
        int curr = vec[i];
        while(!st.empty() && curr <= vec[st.top()]) {
            st.pop();
        }

        if (st.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = st.top();
        } 
        st.push(i);
    }

    while(!st.empty()) {
        st.pop();
    }

    //next smaller right
    nsr[n-1] = n;
    st.push(n-1);

    for (int i = n-2; i>=0; i--) {
        int curr = vec[i];
        while (!st.empty() && curr <= vec[st.top()]) {
            st.pop();
        }

        if(st.empty()) {
            nsr[i] = n;
        } else {
            nsr[i] = st.top();
        }
        st.push(i);
    }
    
    int maxArea = 0;
    for (int i=0; i<n; i++) {
        int height = vec[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = height * width;

        maxArea = max(area,maxArea);
    }

    cout << "Max area of histogram is " << maxArea << endl;
    
}

int main() {
    vector<int> heights = {2,1,5,6,2,3};
    maxArea(heights);
    return 0;
}