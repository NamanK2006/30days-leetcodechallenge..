class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>ch;

       for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

      for(auto x : s){
        if(isalnum(x)){
            ch.push_back(x);
        }
    }
       
    int i = 0;
    int j = ch.size() - 1;
    while(i < j){
     if(ch[i] != ch[j]){
        return false;
     }
     i++;
     j--;
    }

    return true;

    }
};