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

//    vector<int> twoSum(vector<int>& nums, int target) {
//     int n = nums.size();

    // Store {value, original index}
    // vector<pair<int, int>> arr;

    // for(int i = 0; i < n; i++) {
    //     arr.push_back({nums[i], i});
    // }

    // Sort according to value
//     sort(arr.begin(), arr.end());

//     int st = 0;
//     int end = n - 1;

//     while(st < end) {

//         int sum = arr[st].first + arr[end].first;

//         if(sum == target) {
//             return {arr[st].second, arr[end].second};
//         }

//         else if(sum < target) {
//             st++;
//         }

//         else {
//             end--;
//         }
//     }

//     return {};
// }





// Optimized Code using hashing

vector<int> twoSum(vector<int>& arr, int target){
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        int first = arr[i];
        int sec = target - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }

        m[first] = i;
    }
    return ans;
}
};