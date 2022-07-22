class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
           int n=nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++)
        {
            temp[(i+k)%n]=nums[i];
//              formula to rotate elements in cyclic order
            
        }
        
        // copied temp array as it is into nums coz we have to show changes in nums array
        nums=temp;
    
    }
};