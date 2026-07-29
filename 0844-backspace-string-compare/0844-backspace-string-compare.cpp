class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st1, st2;
        string s1 = "", s2 = "";

        for (char ch : s) {
            if (ch == '#') {
                if (!st1.empty())
                    st1.pop();
            } else {
                st1.push(ch);
            }
        }

        for (char ch : t) {
            if (ch == '#') {
                if (!st2.empty())
                    st2.pop();
            } else {
                st2.push(ch);
            }
        }

        while (!st1.empty()) {
            s1 += st1.top();
            st1.pop();
        }

        while (!st2.empty()) {
            s2 += st2.top();
            st2.pop();
        }

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        if (s1 == s2){
            return true ;
        }
        return false;
    }
};