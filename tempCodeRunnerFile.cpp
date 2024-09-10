#include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// vector<int> calculateSpan(const vector<int>& prices) {
//     int n = prices.size();
//     vector<int> span(n);  // To store the span of each day
//     stack<int> s;         // To store indices of the days

//     // Iterate through each price
//     for (int i = 0; i < n; i++) {
//         // Pop elements from the stack while the stack is not empty and the
//         // price at the index stored in the stack is less than or equal to the
//         // current day's price
//         while (!s.empty() && prices[s.top()] <= prices[i]) {
//             s.pop();
//         }

//         // If the stack is empty, then the current price is greater than all
//         // previous prices
//         span[i] = (s.empty()) ? (i + 1) : (i - s.top());

//         // Push the current index onto the stack
//         s.push(i);
//     }

//     return span;
// }

// int main() {
//     vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
//     vector<int> span = calculateSpan(prices);

//     cout << "Stock Span: ";
//     for (int s : span) {
//         cout << s << " ";
//     }

//     return 0;
// }

