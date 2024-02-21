// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         map<int,int>x;
//         for(int i=0;i<nums.size();i++)
//         {
//           x[nums[i]]=x[nums[i]]+1;
        
//         }
//          for (auto& pair : x) {
//         if (pair.second == 1) {
//             return pair.first;
//         }
//     }
//         return 1;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;
        for(int i=0 ; i<nums.size() ; i++){
            ans = ans ^ nums[i];
        }
        
        return ans;
    }
};
