class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs == null || strs.length == 0) return "";
       int minlength = Integer.MAX_VALUE;
       for(String str : strs){
        if(minlength > str.length()){
            minlength = str.length();
        }
       }
       int i = 0;
       while(i < minlength){
        for(String str : strs){
            if(str.charAt(i) != strs[0].charAt(i)){
                return strs[0].substring(0 , i);
            }
        }
        i++;
       }
    return strs[0].substring(0 , i);
    }
}