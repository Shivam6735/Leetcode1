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








class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());

        int multiple = k;

        while (st.count(multiple)) {
            multiple += k;
        }

        return multiple;
    }
};

