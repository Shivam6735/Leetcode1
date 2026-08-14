class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     int n= nums.size();
    //     vector<int> ans;

    //     for(int i=0; i<n-1; i++){
    //         for(int j=i+1; j<n; j++)
    //         if(nums[i]+nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);

    //             return ans;
    //         }
    //     }
    //     return ans;
    // }






    // Better Approach

   vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();

    // Store {value, original index}
    vector<pair<int, int>> arr;

    for(int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    // Sort according to value
    sort(arr.begin(), arr.end());

    int st = 0;
    int end = n - 1;

    while(st < end) {

        int sum = arr[st].first + arr[end].first;

        if(sum == target) {
            return {arr[st].second, arr[end].second};
        }

        else if(sum < target) {
            st++;
        }

        else {
            end--;
        }
    }

    return {};
}
};