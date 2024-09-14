// https://www.naukri.com/code360/problems/minimum-elements_3843091?leftPanelTabValue=PROBLEM 
#include <bits/stdc++.h>
int helper(vector<int> & num, int x)
{
    vector<int> dp(x+1,-1);
    dp[0]=0;
    for(int i=1; i<=x;i++)
    {
        int ans=INT_MAX;
        for(int j=0; j<num.size();j++)
        {
            if(i-num[j]>=0)
            {
                if(dp[i-num[j]]!=INT_MAX)
                {
                    ans=min(ans,1+dp[i-num[j]]);
                }
            }
        }
        dp[i]=ans;
    }
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    int ans=helper(num,x);
    if (ans == INT_MAX) {
        return -1;
    }
    return ans;
}
