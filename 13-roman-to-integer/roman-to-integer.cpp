class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
       int sum = 0;
       int n = s.size();
       int t = 0;
       while(t < n){
        if(t < n-1 && m[s[t]] < m[s[t+1]]){
            sum += m[s[t+1]] - m[s[t]];
            t += 2;
        }
        else {
            sum += m[s[t]];
            t ++;
        }
       }
       return sum;  
    }
};