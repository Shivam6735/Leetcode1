// class Solution {
// public:
//     int missingMultiple(vector<int>& nums, int k) {
//         int multiple = k;

//         while (true) {
//             bool found = false;

//             for (int x : nums) {
//                 if (x == multiple) {
//                     found = true;
//                     break;
//                 }
//             }

//             if (!found)
//                 return multiple;

//             multiple += k;
//         }
//     }
// };








// class Solution {
// public:
//     int missingMultiple(vector<int>& nums, int k) {
//         unordered_set<int> st(nums.begin(), nums.end());

//         int multiple = k;

//         while (st.count(multiple)) {
//             multiple += k;
//         }

//         return multiple;
//     }
// };


















class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        vector<bool> present(n + 1, false);

        for (int x : nums) {
            if (x % k == 0) {
                int index = x / k;

                if (index <= n)
                    present[index] = true;
            }
        }

        for (int i = 1; i <= n + 1; i++) {
            if (!present[i])
                return i * k;
        }

        return -1;
    }
};

