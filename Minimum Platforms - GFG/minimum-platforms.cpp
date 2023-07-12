//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr + n);
    	sort(dep,dep + n);
    	
    	int mx=0;
    
    	for(int i=0;i<n;i++)
    	{
    	    int l=i+1;
    	    int r=n-1;
    	    while(l<=r)
    	    {
    	        int mid=l+(r-l)/2;
    	        if(arr[mid]<=dep[i])
    	            l=mid+1;
    	        else
    	            r=mid-1;
    	    }
    	    mx=max(mx,r-i+1);
    	}
    	return mx;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends