451. Sort Characters By Frequency
Solved
Medium
Topics
Companies
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.

_________________________________________________________________________________________________________________________________________________________________________________
==================================================================================================================================================================================

1. Sorting a Map



_________________________________________________________________________________________________________________________________________________________________________________

class Solution {
public:



    string frequencySort(string s) {
        map<char,int>x;
                vector<pair<int, char>> v;
        string ans = "";


        for(int i=0;i<s.size();i++)
        {
x[s[i]]=x[s[i]]+1;
        }
  for(auto i: x){
            v.push_back({i.second, i.first});
        }
                sort(v.begin(), v.end(), greater<pair<int, char>>());

for(auto i: v)
{
            while(i.first!=0) {
            ans += i.second;
i.first--;
            }
        }
        return ans;
    }
};

_________________________________________________________________________________________________________________________________________________________________________________
==================================================================================================================================================================================
