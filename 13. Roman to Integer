class Solution {
public:
    map<string, int> twoMap;
    map<char, int> oneMap;
    
    bool look2(string s, int& ans, int& i){
        if(twoMap.find(s)!=twoMap.end()){
            ans += twoMap[s];
            i += 2;
            return true;
        }
        return false;
    }
    
    bool look1(char c, int& ans, int& i){
        if(oneMap.find(c)!=oneMap.end()){
            ans += oneMap[c];
            i += 1;
            return true;
        }
        return false;
    }
    
    int romanToInt(string s) {
        int ans = 0;
        int i = 0;

        twoMap["IV"] = 4;
        twoMap["IX"] = 9;
        twoMap["XL"] = 40;
        twoMap["XC"] = 90;
        twoMap["CD"] = 400;
        twoMap["CM"] = 900;

        oneMap['I'] = 1;
        oneMap['V'] = 5;
        oneMap['X'] = 10;
        oneMap['L'] = 50;
        oneMap['C'] = 100;
        oneMap['D'] = 500;
        oneMap['M'] = 1000;
        
        while(i < s.size()){
            if(i+1 < s.size()){
                string subs = s.substr(i, 2);
                bool b = look2(subs, ans, i);
                if(!b){
                    look1(s[i], ans, i);
                }
            }else{
                look1(s[i], ans, i);
            }
        }
        return ans;
    }
};
