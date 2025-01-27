class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]==0)
            {
               nums.push_back(nums[i]);
               nums.erase(nums.begin()+i);
               i--;
               size--;
            }
        }
    }
};