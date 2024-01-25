class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>b;

        for(int i=0; i<nums.size();i++)
        {

    
        b.push_back(nums[i]);
        }
        for(int i=0; i<nums.size();i++)
        {

        
        b.push_back(nums[i]);
        }
        return b;
    }
};
