class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            //this is linear search
            //but for best optimal solution use binary search for both finding row and colum;
            int search_row = 0;
            int m = matrix.size();
            int n = matrix[0].size();
            for (int i = 1; i < m; i++)
            {
                search_row = i;
                if (matrix[i][0] == target)
                    return true;
               
                else if (matrix[i][0] > target)
                {
                    search_row=i-1;
                    break;
                }
                 
            }
            cout<<search_row<<endl;
            for(int i=0;i<n;i++)
            {
                if(matrix[search_row][i]==target)
                    return true;
            }
            return false;
            
            
            
            
        }
    
};