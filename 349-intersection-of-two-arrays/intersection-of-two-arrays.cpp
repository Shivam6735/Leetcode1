class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            bool found = false;

            // Search nums1[i] in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            // If found, check whether already present in answer
            if (found) {
                bool duplicate = false;

                for (int x : ans) {
                    if (x == nums1[i]) {
                        duplicate = true;
                        break;
                    }
                }

                if (!duplicate) {
                    ans.push_back(nums1[i]);
                }
            }
        }

        return ans;
    }
};
