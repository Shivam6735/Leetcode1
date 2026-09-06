// BRUTE FORCE

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int p1 = num1.find('+');
        int p2 = num2.find('+');

        int a = stoi(num1.substr(0, p1));
        int b = stoi(num1.substr(p1 + 1, num1.size() - p1 - 2));

        int c = stoi(num2.substr(0, p2));
        int d = stoi(num2.substr(p2 + 1, num2.size() - p2 - 2));

        int real = a * c - b * d;
        int imag = a * d + b * c;

        return to_string(real) + "+" + to_string(imag) + "i";
    }
};
