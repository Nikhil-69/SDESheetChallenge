class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Brute force
            // int n=matrix.size();
            // vector<vector<int>> matImg=matrix;
            // for(int i=0;i<n;i++)
            // {
            //     for(int j=0;j<n;j++)
            //     {
            //         matImg[j][n-1-i]=matrix[i][j];
            //     }
            // }
            // matrix=matImg;
        
        //optimal
            int n=matrix.size();
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        
    }
};