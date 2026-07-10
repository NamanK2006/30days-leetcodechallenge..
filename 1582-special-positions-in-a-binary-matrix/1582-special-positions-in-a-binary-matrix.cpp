class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int result = 0;

        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 0) {
                    continue;
                }
               bool special = true;
             // Check the column
                for (int k = 0; k < mat.size(); k++) {
                    if (i != k && mat[k][j] == 1) {
                        special = false;
                        break;
                    }
                }
                // Check the row
                for (int l = 0; l < mat[i].size(); l++) {
                    if (l != j && mat[i][l] == 1) {
                        special = false;
                        break;
                    }
                }

                if (special) {
                    result++;
                }
            }
        }

        return result;
    }
};