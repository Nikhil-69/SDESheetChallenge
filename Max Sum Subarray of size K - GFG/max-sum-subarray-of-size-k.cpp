//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here 
        long sum=0;
        long max_sum=0;
        int i=0;int j=0;
        while(j<N)
        {
            if(j<k)
            {
                sum+=Arr[j++];
                max_sum=sum;
            }
            else
            {
                sum=sum-Arr[i++]+Arr[j++];
                max_sum=max(max_sum,sum);
            }
        }
        return max_sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends