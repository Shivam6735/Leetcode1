// class Solution {
// public:
//     bool hasSameDigits(string s) {
//         while (s.size() > 2) {
//             string next = "";

//             for (int i = 0; i < s.size() - 1; i++) {
//                 int a = s[i] - '0';
//                 int b = s[i + 1] - '0';

//                 next += char('0' + (a + b) % 10);
//             }

//             s = next;
//         }

//         return s[0] == s[1];
//     }
// };














class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();

        for (int len = n; len > 2; len--) {
            for (int i = 0; i < len - 1; i++) {
                int a = s[i] - '0';
                int b = s[i + 1] - '0';

                s[i] = char('0' + (a + b) % 10);
            }
        }

        return s[0] == s[1];
    }
};

