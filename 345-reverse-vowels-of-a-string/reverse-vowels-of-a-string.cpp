class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        vector<char> vowels;

        // Store vowels
        for (char c : s) {
            if (isVowel(c))
                vowels.push_back(c);
        }

        // Reverse vowels
        reverse(vowels.begin(), vowels.end());

        // Put them back
        int j = 0;
        for (char &c : s) {
            if (isVowel(c)) {
                c = vowels[j++];
            }
        }

        return s;
    }
};
