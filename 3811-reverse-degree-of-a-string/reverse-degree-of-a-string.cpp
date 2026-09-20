class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            int reverseValue = 0;

            // Search from z to find the reverse position
            for (char c = 'z'; c >= 'a'; c--) {
                reverseValue++;

                if (c == s[i])
                    break;
            }

            ans += (i + 1) * reverseValue;
        }

        return ans;
    }
};
