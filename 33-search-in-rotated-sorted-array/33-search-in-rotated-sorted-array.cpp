class Solution
{
    public:
    int findSmallest(vector<int> &arr)
        {
            int start = 0;
            int n = arr.size();
            int end = n - 1;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                int prev = (mid - 1 + n) % n;
                int next = (mid + 1) % n;
                if (arr[mid] <= arr[prev] and arr[mid] <= arr[next])
                {
                    return mid;
                }

                if (arr[mid] < arr[end])	//right is sorted so search in left
                    end = mid - 1;

                else if (arr[mid] > arr[end])
                    start = mid + 1;
            }
            return -1;
        }
    int binary_search(vector<int> &arr, int target,int start,int end)
    {
        while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (arr[mid]==target)
                {
                    return mid;
                }

                if (arr[mid] < target)	//right is sorted so search in left
                    start = mid + 1;

                else 
                    end = mid - 1;
            }
            return -1;
    }
    int search(vector<int> &arr, int target)
    {
        int idx = findSmallest(arr);
        
        int ans=binary_search(arr,target,0,idx);
         return   (ans!=-1)?ans:binary_search(arr,target,idx,arr.size()-1);
            
    }
    

};