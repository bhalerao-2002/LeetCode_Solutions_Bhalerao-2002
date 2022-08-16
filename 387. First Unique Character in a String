class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> ump(26);
        for(int i=0; i<s.size(); i++){
            ump[s[i]]++;
        }
           
        
         for(int i=0; i<s.size(); i++){
           if(ump[s[i]]==1) return i;
        }
         
        
        return -1;
    }
};
