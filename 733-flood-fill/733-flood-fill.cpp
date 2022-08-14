#define pii pair<int,int>
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
                return image;
        int prevCol=image[sr][sc];
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(q.size())
        {
            
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            if(row>=0 && row<m && col>=0 && col<n && image[row][col]==prevCol)
            {
                    image[row][col]=color;
                    q.push({row+1,col});
                    q.push({row-1,col});
                    q.push({row,col-1});
                    q.push({row,col+1});
            }
        }
        return image;
    }
};