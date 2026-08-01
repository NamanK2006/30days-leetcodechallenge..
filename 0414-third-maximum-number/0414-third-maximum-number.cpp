class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s;
        for (int x : nums) {
            s.insert(x);
        }

        vector<int> v(s.begin(), s.end());

        if (v.size() < 3) {
            return v[v.size() - 1];
        }

        return v[v.size() - 3];
    }
};
