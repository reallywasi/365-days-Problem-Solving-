class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       int n = nums.size();
       int j=1;

       for(int i=1;i<n;i++)
       {
           if(nums[i]!=nums[i-1])
           {
               nums[j]=nums[i];
               j++;

           }
       }
       return j;
       
    }
};





//EXPLANATION 


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();  // Get the size of the input vector
        int j = 1;  // Initialize the position for the modified array (without duplicates)

        for (int i = 1; i < n; i++) {
            // Check if the current element is different from the previous one
            if (nums[i] != nums[i - 1]) {
                // If different, update the modified array at position 'j'
                // and increment 'j' to point to the next position
                nums[j] = nums[i];
                j++;
            }
        }

        // 'j' now represents the size of the modified array without duplicates
        return j;
    }
};

