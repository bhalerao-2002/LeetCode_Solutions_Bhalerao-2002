class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26);
        
        /*
        need to visit all chars in magazine first,
        then to visit chars in ransomNote,
        because we may use chars in magazine in any order
        */
        for(char c : magazine){
            count[c-'a'] += 1;
        }
        
        for(char c : ransomNote){
            count[c-'a'] -= 1;
            if(count[c-'a'] < 0) return false;
        }
        
        return true;
    }
};
