class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> mp{
            {'I', 1}, {'V', 5},
            {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500},
            {'M', 1000}
        };
        res += mp[s[0]];
        for(int i=1; i<s.size(); i++){
            res += mp[s[i]];
            if(mp[s[i-1]]<mp[s[i]]){
                res-= 2*mp[s[i-1]];
            }
        }
        return res;
    }
};