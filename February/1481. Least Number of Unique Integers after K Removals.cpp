1481. Least Number of Unique Integers after K Removals
Solved
Medium
Topics
Companies
Hint
Given an array of integers arr and an integer k. Find the least number of unique integers after removing exactly k elements.

 

Example 1:

Input: arr = [5,5,4], k = 1
Output: 1
Explanation: Remove the single 4, only 5 is left.
Example 2:
Input: arr = [4,3,1,1,3,3,2], k = 3
Output: 2
Explanation: Remove 4, 2 and either one of the two 1s or three 3s. 1 and 3 will be left.
 

Constraints:

1 <= arr.length <= 10^5
1 <= arr[i] <= 10^9
0 <= k <= arr.length

  
___________________________________________________________________________________________________________________________________________________________________
===================================================================================================================================================================
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        std::map<int, int> x;
        int p = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(x[arr[i]] == 0) {
                p++;
            }
            x[arr[i]] = x[arr[i]] + 1;
        }

        vector<int> frequencies;

        for (const auto& pp : x) {
            frequencies.push_back(pp.second);
        }
        
        sort(frequencies.begin(), frequencies.end());

        for (int freq : frequencies) {
            if (k >= freq) {
                k -= freq;
                p--;
            }
        }

        return p;
    }
};

___________________________________________________________________________________________________________________________________________________________________
===================================================================================================================================================================
