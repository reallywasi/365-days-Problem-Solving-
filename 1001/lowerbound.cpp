#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 7};
    int n = 3;

    // Using lower_bound to find the position of the first element not less than n
    auto lb = lower_bound(arr.begin(), arr.end(), n);

    // Converting iterator to an integer position
    int lb_position = distance(arr.begin(), lb);

    // Output the result
    if (lb != arr.end()) {
        cout << "First element not less than " << n << " is at position: " << lb_position << endl;
    } else {
        cout << "All elements are less than " << n << endl;
    }

    return 0;
}
