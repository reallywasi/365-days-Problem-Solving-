class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_count=0;
        int one_count=0;
        int two_count=0;
        int j=0;
  for (int i = 0; i < nums.size(); i++) {
        switch (nums[i]) {
            case 0:
                zero_count++;
                break;
            case 1:
                one_count++;
                break;
            case 2:
                two_count++;
                break;
        }
    }   
     while (zero_count > 0) {
        nums[j++] = 0;
        zero_count--;
    }
   while (one_count > 0) {
        nums[j++] = 1;
        one_count--;
    }
    while (two_count > 0) {
        nums[j++] = 2;
        two_count--;
    }


    }
};
