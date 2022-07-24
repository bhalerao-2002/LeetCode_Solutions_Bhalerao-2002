//thanks to bhalerao-2002
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    string intToRoman(int num) {
        vector<string> s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> n={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        while(num!=0){
            for(int i=0;i<n.size();i++){
                while(num>=n[i]){
                    num-=n[i];
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};
