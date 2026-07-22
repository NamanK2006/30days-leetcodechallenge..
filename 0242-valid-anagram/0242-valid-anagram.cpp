class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        map<char, int> m;
        map<char, int> m2;

        for (auto x : s)
            m[x]++;

        for (auto x : t)
            m2[x]++;

        if(m == m2){
return true;
        }
        return false;
    }
};