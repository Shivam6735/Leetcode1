// class Solution {
// public:
//     bool isVowel(char c) {
//         return c == 'a' || c == 'e' || c == 'i' ||
//                c == 'o' || c == 'u' ||
//                c == 'A' || c == 'E' || c == 'I' ||
//                c == 'O' || c == 'U';
//     }

//     string reverseVowels(string s) {
//         vector<char> vowels;

//         // Store vowels
//         for (char c : s) {
//             if (isVowel(c))
//                 vowels.push_back(c);
//         }

//         // Reverse vowels
//         reverse(vowels.begin(), vowels.end());

//         // Put them back
//         int j = 0;
//         for (char &c : s) {
//             if (isVowel(c)) {
//                 c = vowels[j++];
//             }
//         }

//         return s;
//     }
// };























// BETTER APPROACH

// class Solution {
// public:
//     bool isVowel(char c) {
//         return c == 'a' || c == 'e' || c == 'i' ||
//                c == 'o' || c == 'u' ||
//                c == 'A' || c == 'E' || c == 'I' ||
//                c == 'O' || c == 'U';
//     }

//     string reverseVowels(string s) {
//         vector<int> pos;

//         for (int i = 0; i < s.size(); i++) {
//             if (isVowel(s[i]))
//                 pos.push_back(i);
//         }

//         int left = 0;
//         int right = pos.size() - 1;

//         while (left < right) {
//             swap(s[pos[left]], s[pos[right]]);
//             left++;
//             right--;
//         }

//         return s;
//     }
// };
















// Most Optimal using Two Pointer

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Find vowel from left
            while (left < right && !isVowel(s[left])) {
                left++;
            }

            // Find vowel from right
            while (left < right && !isVowel(s[right])) {
                right--;
            }

            // Swap vowels
            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};


