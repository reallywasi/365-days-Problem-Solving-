
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.



_____________________________________________________________________________________________________

string find function returns npos when character is not found 

______________________________________________________________________________________________________

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = s.size();
        string x = "";
        int maxLength = 0;

        while (start < end) {
            if (x.find(s[start]) == string::npos) {
                x += s[start];
                if (maxLength < x.size()) {
                    maxLength = x.size();
                }
                start++;
            } else {
                x.erase(0, 1);
            }
        }
        return maxLength;
    }
};
