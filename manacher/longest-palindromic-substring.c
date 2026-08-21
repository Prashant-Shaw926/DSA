char* longestPalindrome(char* s) {
    int n = strlen(s);

    if (n == 1) {
        char* ans = (char*)malloc(2 * sizeof(char));
        if (ans == NULL)
            return NULL;
        ans[0] = s[0];
        ans[1] = '\0';
        return ans;
    }

    int maxLen = 0;
    int leftIndex = -1, rightIndex = -1;

    for (int i = 0; i < n; i++) {
        int left = i - 1, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (maxLen < right - left + 1) {
                maxLen = right - left + 1;
                leftIndex = left;
                rightIndex = right;
            }
            left--;
            right++;
        }
    };

    for (int i = 0; i < n - 1; i++) {
        int left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (maxLen < right - left + 1) {
                maxLen = right - left + 1;
                leftIndex = left;
                rightIndex = right;
            }
            left--;
            right++;
        }
    };

    if (maxLen == 0) {
        char* ans = (char*)malloc(2 * sizeof(char));
        if (ans == NULL)
            return NULL;
        ans[0] = s[0];
        ans[1] = '\0';
        return ans;
    }

    char* ans = (char*)malloc((maxLen + 1) * sizeof(char));
    if (ans == NULL)
        return NULL;
    strncpy(ans, s + leftIndex, maxLen);
    ans[maxLen] = '\0';

    return ans;
}
