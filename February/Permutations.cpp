46. Permutations

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]



________________________________________________________________________________________________________________________________________________________________________________
================================================================================================================================================================================

love babbar video no. 39 pe recursion tree banaya hai index and j ko swap krke . then solve krna baar baar 


________________________________________________________________________________________________________________________________________________________________________________

class Solution {

    private:
    void solve(vector<int>&nums, vector<vector<int>>&ans,int index)
    {
if(index>=nums.size())
{
    ans.push_back(nums);
    return;
}
for(int j=index;j<nums.size();j++)
{
    swap(nums[index],nums[j]);
    solve(nums,ans,index+1);

   // backtracking
  // so that nums me wapas original value jaye instead of swapped one
  // had the function not been called by called by reference without backtracking it would've worked.

   swap(nums[j],nums[index]);
}

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;

    }
};

________________________________________________________________________________________________________________________________________________________________________________
================================================================================================================================================================================

