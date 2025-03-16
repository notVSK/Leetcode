class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int word = 1;//for switching the word alterantively
       int A = word1.size();//for traversing the 1st word 
       int B = word2.size();//for traversing the 2nd word
       int a = 0; int b = 0;//pointer for word1 and word2
       string result;// for printing result

       while(a < A && b < B){//while the pointer is not in the end of the word
        result += word1[a];// including the character in the string from the word
        result += word2[b];
        a++; b++;
       }
       while(a < A){// complete the remaining word if left
        result += word1[a];
        a++;
       }
       while(b < B){// complete the remaining word if left
        result += word2[b];
        b++;
       }
    return result;
    }
};