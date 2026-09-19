// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         int n = score.size();
//         vector<string> ans(n);

//         for (int i = 0; i < n; i++) {
//             int rank = 1;

//             for (int j = 0; j < n; j++) {
//                 if (score[j] > score[i]) {
//                     rank++;
//                 }
//             }

//             if (rank == 1)
//                 ans[i] = "Gold Medal";
//             else if (rank == 2)
//                 ans[i] = "Silver Medal";
//             else if (rank == 3)
//                 ans[i] = "Bronze Medal";
//             else
//                 ans[i] = to_string(rank);
//         }

//         return ans;
//     }
// };













// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& score) {
//         int n = score.size();

//         vector<pair<int, int>> arr;

//         for (int i = 0; i < n; i++) {
//             arr.push_back({score[i], i});
//         }

//         sort(arr.begin(), arr.end(), greater<pair<int, int>>());

//         vector<string> ans(n);

//         for (int rank = 0; rank < n; rank++) {
//             int originalIndex = arr[rank].second;

//             if (rank == 0)
//                 ans[originalIndex] = "Gold Medal";
//             else if (rank == 1)
//                 ans[originalIndex] = "Silver Medal";
//             else if (rank == 2)
//                 ans[originalIndex] = "Bronze Medal";
//             else
//                 ans[originalIndex] = to_string(rank + 1);
//         }

//         return ans;
//     }
// };














class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<int> indices(n);

        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });

        vector<string> ans(n);

        for (int rank = 0; rank < n; rank++) {
            int index = indices[rank];

            if (rank == 0)
                ans[index] = "Gold Medal";
            else if (rank == 1)
                ans[index] = "Silver Medal";
            else if (rank == 2)
                ans[index] = "Bronze Medal";
            else
                ans[index] = to_string(rank + 1);
        }

        return ans;
    }
};

