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













class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;

        for (char c : jewels) {
            st.insert(c);
        }

        int count = 0;

        for (char c : stones) {
            if (st.count(c)) {
                count++;
            }
        }

        return count;
    }
};

