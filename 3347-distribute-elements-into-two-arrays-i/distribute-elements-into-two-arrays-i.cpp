class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        vector<int> ans;
        for(int i=2; i<n; i++){


            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[i]);
            } else{
                arr2.push_back(nums[i]);
            }

            
        }
        ans.insert(ans.end(),arr1.begin(), arr1.end());
            ans.insert(ans.end(),arr2.begin(), arr2.end());
            return ans;
        

    }
};