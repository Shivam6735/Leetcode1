// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for(int i=0; i<s.length(); i++){

//        int count = 0;
//     //    Count how many times s[i] appears
//         for(int j=0; j<s.length(); j++){
//             if(s[i] == s[j]){
//                 count++;
//             }
//         }
//         // If it appears only once
//         if(count == 1){
//             return i;
//         }
//         }
//         return -1;

//     }
// };





// ABOVE CODE SHOWS TLE






class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        // Count each character
        for (char c : s) {
            count[c - 'a']++;
        }

        // Find first character occurring once
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
