
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        for(auto x : nums) {
            if(x == 0) {
                ans.push_back(x);
            }
        }
        for(auto x : nums) {
            if(x == 1) {
                ans.push_back(x);
            }
        }
        for(auto x : nums) {
            if(x == 2) {
                ans.push_back(x);
            }
        }
        nums = ans;
    }
}; 
    