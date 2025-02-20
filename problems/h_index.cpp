#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.rbegin(), citations.rend()); // Sort in descending order
    int h = 0;
    
    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] >= i + 1) {
            h = i + 1; // Update h-index
        } else {
            break; // Stop when condition fails
        }
    }
    
    return h;
}

int main() {
    vector<int> citations1 = {3, 0, 6, 1, 5};
    vector<int> citations2 = {1, 3, 1};
    
    cout << "H-Index for citations1: " << hIndex(citations1) << endl; // Output: 3
    cout << "H-Index for citations2: " << hIndex(citations2) << endl; // Output: 1

    return 0;
}

/*Explanation with Example
Example 1: citations = [3, 0, 6, 1, 5]
Sort in descending order: [6, 5, 3, 1, 0]
Iterate and check:
Index 0 → 6 >= 1 → h = 1
Index 1 → 5 >= 2 → h = 2
Index 2 → 3 >= 3 → h = 3
Index 3 → 1 < 4 → Stop.
Final h-index: 3
*/
