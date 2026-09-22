// class Solution {
// public:
//     int maximumPopulation(vector<vector<int>>& logs) {
//        int maxPop = 0;
//        int ans = 1950;

//        for(int year = 1950; year <= 2050; year++){
//         int population = 0;

//         for(auto& person : logs){
//             int birth = person[0];
//             int death = person[1];

//             if(birth <= year && year < death){
//                 population++;
//             }
//         }
//         if (population > maxPop) {
//                 maxPop = population;
//                 ans = year;
//             }
//        }
//        return ans;
//     }
// };












class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int population[101] = {};

        for (auto& person : logs) {
            int birth = person[0];
            int death = person[1];

            for (int year = birth; year < death; year++) {
                population[year - 1950]++;
            }
        }

        int maxPop = 0;
        int ans = 1950;

        for (int i = 0; i <= 100; i++) {
            if (population[i] > maxPop) {
                maxPop = population[i];
                ans = 1950 + i;
            }
        }

        return ans;
    }
};
