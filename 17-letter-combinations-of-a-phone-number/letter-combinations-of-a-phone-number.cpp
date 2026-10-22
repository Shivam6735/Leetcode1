
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> keypad = {
            "",     "",     "abc",  "def",
            "ghi",  "jkl",  "mno",  "pqrs",
            "tuv",  "wxyz"
        };

        vector<string> ans;
        string current;

        backtrack(digits, 0, current, ans, keypad);

        return ans;
    }

private:
    void backtrack(string& digits, int index,
                   string& current, vector<string>& ans,
                   vector<string>& keypad) {
        // Base case: all digits have been processed
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        // Get letters corresponding to the current digit
        string letters = keypad[digits[index] - '0'];

        for (char ch : letters) {
            current.push_back(ch);

            backtrack(digits, index + 1, current, ans, keypad);

            current.pop_back(); // Backtrack
        }
    }
};
