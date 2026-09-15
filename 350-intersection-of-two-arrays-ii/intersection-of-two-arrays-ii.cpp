// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         vector<bool> used(nums2.size(), false);

//         for (int i = 0; i < nums1.size(); i++) {
//             for (int j = 0; j < nums2.size(); j++) {
//                 if (nums1[i] == nums2[j] && !used[j]) {
//                     ans.push_back(nums1[i]);
//                     used[j] = true;
//                     break;
//                 }
//             }
//         }

//         return ans;
//     }
// };




























// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());

//         vector<int> ans;

//         int i = 0;
//         int j = 0;

//         while (i < nums1.size() && j < nums2.size()) {
//             if (nums1[i] == nums2[j]) {
//                 ans.push_back(nums1[i]);
//                 i++;
//                 j++;
//             }
//             else if (nums1[i] < nums2[j]) {
//                 i++;
//             }
//             else {
//                 j++;
//             }
//         }

//         return ans;
//     }
// };















class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for (int num : nums1) {
            freq[num]++;
        }

        for (int num : nums2) {
            if (freq[num] > 0) {
                ans.push_back(num);
                freq[num]--;
            }
        }

        return ans;
    }
};