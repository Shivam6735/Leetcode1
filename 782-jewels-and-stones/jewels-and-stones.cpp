// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0;

//         for (char stone : stones) {
//             for (char jewel : jewels) {
//                 if (stone == jewel) {
//                     count++;
//                     break;
//                 }
//             }
//         }

//         return count;
//     }
// };













// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         unordered_set<char> st;

//         for (char c : jewels) {
//             st.insert(c);
//         }

//         int count = 0;

//         for (char c : stones) {
//             if (st.count(c)) {
//                 count++;
//             }
//         }

//         return count;
//     }
// };











class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool isJewel[128] = {};

        for (char c : jewels) {
            isJewel[c] = true;
        }

        int count = 0;

        for (char c : stones) {
            if (isJewel[c]) {
                count++;
            }
        }

        return count;
    }
};


