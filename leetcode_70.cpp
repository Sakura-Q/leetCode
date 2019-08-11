class Solution {
public:
    int climbStairs(int n) {
        int f0=1,f1=1;
        int f2;
        for(int i=2;i<=n;i++){
            f2=f1+f0;
            f0=f1;
            f1=f2;
        }
        return f1;
    }
};