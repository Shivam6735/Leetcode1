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














// class Solution {
// public:
//     bool hasSameDigits(string s) {
//         int n = s.size();

//         for (int len = n; len > 2; len--) {
//             for (int i = 0; i < len - 1; i++) {
//                 int a = s[i] - '0';
//                 int b = s[i + 1] - '0';

//                 s[i] = char('0' + (a + b) % 10);
//             }
//         }

//         return s[0] == s[1];
//     }
// };














class Solution {
public:
    int Cmod2(int n, int r) {
        // Lucas theorem for prime p = 2
        while (n || r) {
            if ((r % 2) > (n % 2))
                return 0;

            n /= 2;
            r /= 2;
        }
        return 1;
    }

    int Cmod5(int n, int r) {
        // C(n,r) mod 5 using Lucas theorem
        int smallC[5][5] = {
            {1, 0, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {1, 2, 1, 0, 0},
            {1, 3, 3, 1, 0},
            {1, 4, 1, 4, 1}
        };

        int result = 1;

        while (n || r) {
            int ni = n % 5;
            int ri = r % 5;

            if (ri > ni)
                return 0;

            result = (result * smallC[ni][ri]) % 5;

            n /= 5;
            r /= 5;
        }

        return result;
    }

    int Cmod10(int n, int r) {
        int a = Cmod2(n, r);  // mod 2
        int b = Cmod5(n, r);  // mod 5

        // CRT:
        // x % 2 = a
        // x % 5 = b
        for (int x = 0; x < 10; x++) {
            if (x % 2 == a && x % 5 == b)
                return x;
        }

        return 0;
    }

    bool hasSameDigits(string s) {
        int n = s.size() - 2;

        int left = 0;
        int right = 0;

        for (int i = 0; i <= n; i++) {
            int coeff = Cmod10(n, i);

            left = (left + coeff * (s[i] - '0')) % 10;
            right = (right + coeff * (s[i + 1] - '0')) % 10;
        }

        return left == right;
    }
};
