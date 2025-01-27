class Solution {
public:
    bool canJump(vector<int>& nums) {
      int maxr=0;
      for(int i=0;i<nums.size();i++)
      {
        if(i>maxr)
        return false;
        else
        maxr=max(maxr,nums[i]+i);
      }  
      return true;
    }
};