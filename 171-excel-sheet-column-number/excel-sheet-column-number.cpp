// class Solution {
// public:
//     int titleToNumber(string columnTitle) {
//         int num = 0;

//         for (int i = 1; ; i++) {
//             int x = i;
//             string s = "";

//             while (x > 0) {
//                 x--;
//                 s += char('A' + x % 26);
//                 x /= 26;
//             }

//             reverse(s.begin(), s.end());

//             if (s == columnTitle)
//                 return i;
//         }
//     }
// };












class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;

        for (char ch : columnTitle) {
            int value = ch - 'A' + 1;
            ans = ans * 26 + value;
        }

        return ans;
    }
};
