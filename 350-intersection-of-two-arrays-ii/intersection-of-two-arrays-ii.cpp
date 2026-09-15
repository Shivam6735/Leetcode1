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

//         return ans;
//     }
// };