/// https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public: 
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int a=cost[0];
        int b=cost[1];
        int c=0;
        for(int i=2;i<cost.size();i++)
        { 
            c=cost[i]+min(a,b);
            a=b;
            b=c;
        }
        c=min(a,b);
        return c;
    }
};
