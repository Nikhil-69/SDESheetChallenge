class Solution {
public:
    int climbStairs(int n) {
       int qb[50]={0};
        // for(int i=0;i<=n;i++)
        //     qb[i]=0;
        return climbstairs_helper(n,qb);
    }
    int climbstairs_helper(int n,int qb[])
    {
        if(n==0) return 1;
        if(n<0) return 0;
        
        if(qb[n]!=0)
        return qb[n];
        
        return qb[n]=climbstairs_helper(n-1,qb)+climbstairs_helper(n-2,qb);
    }
};