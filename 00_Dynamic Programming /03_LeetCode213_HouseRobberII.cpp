// https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int helper(vector<int> & nums, int index, int end,  int take)
    {
        int np=0;
        int nn=0;
        int cp=0;
        int cn=0;
        for(int i=end;i>=index;i--)
        {
            cp=max(nums[i]+nn,np);
            cn=np;
            nn=cn;
            np=cp;
        }
        if(take==0)
        {
            return cn;
        }
        return cp;
    }
    
    int rob(vector<int>& nums) 
    {
        int a=nums[0]+ helper(nums,1 , nums.size()-2,0);
        int b=helper(nums, 1 , nums.size()-1,1);
        return max(a,b);
    }
};
