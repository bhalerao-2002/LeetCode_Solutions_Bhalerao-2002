class Solution {
    /*
    stack stuff
    */
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<int> s;
        vector<int> result(temps.size());
        for (int i = 0; i < temps.size(); i++){
            while (s.size() && temps[s.top()] < temps[i] ){
                result[s.top()] = i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return result;
    }
};
