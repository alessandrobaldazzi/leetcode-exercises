class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        vector<string> roman{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> values{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
        while(num != 0){
            if(values[i]>num){
                i++;
            }
            else{
                num -= values[i];
                ans += roman[i];
            }
        }
        return ans;
    }
};