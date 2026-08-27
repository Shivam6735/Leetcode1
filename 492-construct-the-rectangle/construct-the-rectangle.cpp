// class Solution {
// public:
//     vector<int> constructRectangle(int area) {
//         int bestL = area, bestW = 1;

//         for (int W = 1; W * W <= area; W++) {
//             if (area % W == 0) {
//                 int L = area / W;

//                 if (L - W < bestL - bestW) {
//                     bestL = L;
//                     bestW = W;
//                 }
//             }
//         }

//         return {bestL, bestW};
//     }
// };













class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W = sqrt(area);

        while (area % W != 0) {
            W--;
        }

        return {area / W, W};
    }
};


