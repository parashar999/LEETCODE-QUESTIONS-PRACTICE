/// https://www.naukri.com/code360/problems/maximum-sum-of-non-adjacent-elements_843261

#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums)
{
    vector<vector<int>> dp(nums.size()+1,vector<int>(2,0));
    int np=0;
    int nn=0;
    int cp=0;
    int cn=0;
    for(int i=nums.size()-1; i>=0; i--)
    {
        cp=max(nums[i]+nn,np);
        cn=np;
        np=cp;
        nn=cn;
    }
    return cp;
}
