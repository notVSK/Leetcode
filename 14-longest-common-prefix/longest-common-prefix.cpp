class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if(strs.empty()) return "";
        int minlength = INT_MAX;
      for(string& str : strs){//takes the shortest string for optimized result
        minlength = min(minlength, (int)str.length());//stores the length of the shortest string
      }
      int i = 0;
      while(i < minlength){//should be shorter than the shortest string in the array
        for (const string& s : strs) {// traversing through the whole array
                if (s[i] != strs[0][i]) {
                    return strs[0].substr(0, i);//comparing each letter of each word with each letter of first word until they are not different and incrementing the pointer till the same
                }
            }
            i++;
      }
      return strs[0].substr(0,i);// returning the substring till the same substring ends
    }
};