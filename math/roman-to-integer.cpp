class Solution {
public:
    int romanToInt(string s) {
        int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
        int track = 0;
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i == 0) {
                if (s[i] == 'I') {
                    ans += I;
                    track = I;
                } else if (s[i] == 'V') {
                    ans += V;
                    track = V;
                } else if (s[i] == 'X') {
                    ans += X;
                    track = X;
                } else if (s[i] == 'L') {
                    ans += L;
                    track = L;
                } else if (s[i] == 'C') {
                    ans += C;
                    track = C;
                } else if (s[i] == 'D') {
                    ans += D;
                    track = D;
                } else {
                    ans += M;
                    track = M;
                }
            } else {
                if (s[i] == 'I') {
                    ans += I;
                    track = I;
                } else if (s[i] == 'V') {
                    if (track < V) {
                        ans -= track;
                        ans += V - track;
                    } else {
                        ans += V;
                    }
                    track = V;
                } else if (s[i] == 'X') {
                    if (track < X) {
                        ans -= track;
                        ans += X - track;
                    } else {
                        ans += X;
                    }
                    track = X;
                } else if (s[i] == 'L') {
                    if (track < L) {
                        ans -= track;
                        ans += L - track;
                    } else {
                        ans += L;
                    }
                    track = L;
                } else if (s[i] == 'C') {
                    if (track < C) {
                        ans -= track;
                        ans += C - track;
                    } else {
                        ans += C;
                    }
                    track = C;
                } else if (s[i] == 'D') {
                    if (track < D) {
                        ans -= track;
                        ans += D - track;
                    } else {
                        ans += D;
                    }
                    track = D;
                } else {
                    if (track < M) {
                        ans -= track;
                        ans += M - track;
                    } else {
                        ans += M;
                    }
                    track = M;
                }
            }
        }
        return ans;
    }
};