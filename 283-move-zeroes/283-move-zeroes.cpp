class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,count=0;
        
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[count]);
                count++;
            
            }
        }
        
    }
};