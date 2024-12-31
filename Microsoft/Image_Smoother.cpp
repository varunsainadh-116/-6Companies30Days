class Solution {
public:
    vector<vector<int>> direc{
        {-1, -1}, {-1 , 0}, {-1 , 1},
        {0, -1}, {0, 0}, {0, 1},
        {1, -1}, {1, 0}, {1 , 1}

    };
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0, cnt = 0;
                for (auto x : direc) {
                    int k = i + x[0];
                    int l = j + x[1];
                    if (k >= 0 && k < m && l >= 0 && l < n) {
                        sum += img[k][l];
                        ++cnt;
                    }
                }
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
};

// Time Complexity: O(m*n)
// Space Complexity: O(m*n)