class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();

        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                s.erase(i,2);

                i=i-2;

                if(i < -1)
                i = -1;
            }
        }
        return s;
    }
};