class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i = 0;
        int n = s.length(), m = t.length();
        if (n != m)
            return false;
        unordered_map<char, char> sTot;
        unordered_map<char, char> tTos;
        for (i; i < n; i++) {
            if (sTot.find(s[i]) != sTot.end() &&
                tTos.find(t[i]) != tTos.end()) {
                if (sTot[s[i]] != t[i] || tTos[t[i]] != s[i])
                    return false;
            } else if (sTot.find(s[i]) == sTot.end() &&
                       tTos.find(t[i]) == tTos.end()) {
                sTot[s[i]] = t[i];
                tTos[t[i]] = s[i];
            }else{
                return false;
            }
        }

        return true;
    }
};