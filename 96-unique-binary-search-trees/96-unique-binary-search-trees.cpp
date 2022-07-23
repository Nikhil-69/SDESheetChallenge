class Solution {
public:
//     unsigned long long int fact(int n){
        
//     }
//     unsigned long long int fact(int n){
    
    int numTrees(int n) {
        unsigned long long int ans=1;
        for(int i=n+1;i<=2*n;i++)
        {
            ans*=i;
            ans/=i-n;
        }
        return ans/(n+1);
    }
};