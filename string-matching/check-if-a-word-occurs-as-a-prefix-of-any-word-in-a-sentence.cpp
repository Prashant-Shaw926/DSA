class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {

        if (sentence.length() == 0)
            return -1;

        map<int, string> map;
        string temp = "";
        int currentWordNum = 1;
        for (char c : sentence) {
            if (c == ' ') {
                map[currentWordNum] = temp;
                currentWordNum++;
                temp = "";
            } else
                temp += c;
        }

        map[currentWordNum] = temp;

        for (const auto& pair : map) {
            if (pair.second.find(searchWord) == 0) {
                return pair.first;
            }
        }

        return -1;
    }
};