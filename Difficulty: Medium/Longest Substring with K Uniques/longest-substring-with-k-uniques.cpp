class Solution {
	public:
	int longestKSubstr(string &s, int k) {
		int n = s.size();
		
		int i = 0, j = i;
		int longest = INT_MIN;
		int size = 0;
		unordered_map<char, int> freq;
		
		while (j<n) {
			
			freq[s[j]]++;
			size = freq.size();
			
			if (size == k) {
				longest = max(longest, j - i + 1);
			} else {
				while (size > k) {
					freq[s[i]]--;
					
					if (freq[s[i]] == 0) {
						freq.erase(s[i]);
					}
					i++;
					size = freq.size();
				}
				if (size == k) {
					longest = max(longest, j - i + 1);
				}
			}
			j++;
		}
		
		return longest == INT_MIN ? -1 : longest;
		
	}
};
