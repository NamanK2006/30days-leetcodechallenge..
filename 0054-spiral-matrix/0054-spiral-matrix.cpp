class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int srow = 0, erow = n - 1;
        int scol = 0, ecol = m - 1;

        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // Top

            for (int j = scol; j <= ecol; j++) {
                ans.push_back(mat[srow][j]);
            }
            // Right

            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }
            // Corner Case

            if (srow == erow) {
                break;
            }
            // Bottom

            for (int j = ecol - 1; j >= scol; j--) {
                ans.push_back(mat[erow][j]);
            }
            // Corner Case

            if (scol == ecol) {
                break;
            }
            // Left
            
            for (int i = erow - 1; i > srow; i--) {
                ans.push_back(mat[i][scol]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};