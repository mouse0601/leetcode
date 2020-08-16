class Solution {
public:
    const int dx[4] = {1, 0, 0, -1};
    const int dy[4] = {0, 1, -1, 0};
    //题解中的深度优先遍历
    void dfs(vector<vector<int>>& image, int x, int y, int color, int newColor) {
        if (image[x][y] == color) {
            image[x][y] = newColor;
            for (int i = 0; i < 4; i++) {
                int mx = x + dx[i], my = y + dy[i];
                if (mx >= 0 && mx < image.size() && my >= 0 && my < image[0].size()) {
                    dfs(image, mx, my, color, newColor);
                }
            }
        }
    }
    //自己写的深度优先遍历
    void df(vector<vector<int>> &image,int sr,int sc,int newColor)
    {
        int temp = image[sr][sc];
        image[sr][sc] = newColor;
        if(sr > 0 && image[sr-1][sc] == temp)
        {
            df(image,sr-1,sc,newColor);
        }
        if(sr < (image.size() - 1) && image[sr+1][sc] == temp)
        {
            df(image,sr+1,sc,newColor);
        }
        if(sc > 0 && image[sr][sc-1] == temp)
        {
            df(image,sr,sc-1,newColor);
        }
        if(sc < (image[0].size() - 1) && image[sr][sc+1] == temp)
        {
            df(image,sr,sc+1,newColor);
        }
        
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //广度优先遍历
        /*int currColor = image[sr][sc];
        if (currColor == newColor) return image;
        int n = image.size(), m = image[0].size();
        queue<pair<int, int>> que;
        que.emplace(sr, sc);
        image[sr][sc] = newColor;
        while (!que.empty()) {
            int x = que.front().first, y = que.front().second;
            que.pop();
            for (int i = 0; i < 4; i++) {
                int mx = x + dx[i], my = y + dy[i];
                if (mx >= 0 && mx < n && my >= 0 && my < m && image[mx][my] == currColor) {
                    que.emplace(mx, my);
                    image[mx][my] = newColor;
                }
            }
        }
        return image;*/

        
        //深度优先遍历
        int currColor = image[sr][sc];
        if (currColor != newColor) {
            df(image, sr, sc, newColor);
        }
        return image;

    }
};
