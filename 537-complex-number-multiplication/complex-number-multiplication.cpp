// BRUTE FORCE

// class Solution {
// public:
//     string complexNumberMultiply(string num1, string num2) {

//         int p1 = num1.find('+');
//         int p2 = num2.find('+');

//         int a = stoi(num1.substr(0, p1));
//         int b = stoi(num1.substr(p1 + 1, num1.size() - p1 - 2));

//         int c = stoi(num2.substr(0, p2));
//         int d = stoi(num2.substr(p2 + 1, num2.size() - p2 - 2));

//         int real = a * c - b * d;
//         int imag = a * d + b * c;

//         return to_string(real) + "+" + to_string(imag) + "i";
//     }
// };










// BETTER APPROACH

class Solution {
public:

    vector<int> parse(string s) {
        int pos = s.find('+');

        int real = stoi(s.substr(0, pos));
        int imag = stoi(s.substr(pos + 1, s.size() - pos - 2));

        return {real, imag};
    }

    string complexNumberMultiply(string num1, string num2) {

        vector<int> a = parse(num1);
        vector<int> b = parse(num2);

        int real = a[0] * b[0] - a[1] * b[1];
        int imag = a[0] * b[1] + a[1] * b[0];

        return to_string(real) + "+" + to_string(imag) + "i";
    }
};

