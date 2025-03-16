class Solution {
    public String mergeAlternately(String word1, String word2) {
       int A = word1.length();
       int B = word2.length();
       int a = 0 , b = 0;
       StringBuilder result = new StringBuilder();// because stringBuilder is mutable

        while(a < A && b < B){
            result.append(word1.charAt(a));
            result.append(word2.charAt(b));
            a++;
            b++;
        }

        while(a < A){
           result.append(word1.charAt(a));
           a++; 
        }

        while(b < B){
           result.append(word2.charAt(b));
           b++;
        }
        return result.toString();// stringbuilder is a different data type;
    }
}