class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastCount = 0, track = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (track != 0) {
                    lastCount = track;
                }
                track = 0;
            } else {
                track++;
            }
        }
        return track == 0 ? lastCount : track;
    }
};