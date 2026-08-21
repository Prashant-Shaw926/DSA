int countSubstrings(char* s) {
    int n = strlen(s);

    if (n == 0)
        return 0;

    int count = 0;

    for (int i = 0; i < n; i++) {
        count++;
        int left = i - 1, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    };

    for (int i = 0; i < n - 1; i++) {
        int left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    };

    return count;
}