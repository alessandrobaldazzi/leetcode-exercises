class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> mp{
            {1, "I"}, {4, "IV"}, {5, "V"},
            {9, "IX"}, {10, "X"}, {40, "XL"},
            {50, "L"}, {90, "XC"}, {100, "C"},
            {400, "CD"}, {500, "D"}, {900, "CM"},
            {1000, "M"}
        };

        string res = "", curRes ="";
        int mod10 = num % 10;
        int cur = mod10;
        if(mp.contains(cur)){
            res += mp[cur];
        }
        else{
            if(cur>5){
                res += mp[5];
                cur -= 5;
            }
            for(int i=0; i<cur; i++){
                res += mp[1];
            }
        }

        int mod100 = num % 100 - mod10;
        cur = mod100;
        if(mp.contains(cur)){
            curRes += mp[cur];
        }
        else{
            if(cur>50){
                curRes += mp[50];
                cur -= 50;
            }
            cur /= 10;
            for(int i=0; i<cur; i++){
                curRes += mp[10];
            }
        }
        res = curRes + res;
        curRes = "";

        int mod1000 = num % 1000 -mod100 - mod10;
        cur = mod1000;

        if(mp.contains(cur)){
            curRes += mp[cur];
        }
        else{
            if(cur>500){
                curRes += mp[500];
                cur -= 500;
            }
            cur /= 100;
            for(int i=0; i<cur; i++){
                curRes += mp[100];
            }
        }
        res = curRes + res;
        curRes = "";

        int mod4000 = num % 4000 -mod1000 -mod100 - mod10;
        cur = mod4000/1000;
        for(int i=0; i<cur; i++){
            curRes += mp[1000];
        }
        res = curRes + res;
        return res;
    }
};