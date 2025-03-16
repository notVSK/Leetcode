class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> m = new HashMap();
        int i = 0;
        int sum = 0;
        int n = s.length();
        m.put('I', 1);
        m.put('V', 5);
        m.put('X', 10);
        m.put('L', 50);
        m.put('C', 100);
        m.put('D', 500);
        m.put('M', 1000);
        while(i < n){
        if(i < n - 1 && m.get(s.charAt(i)) < m.get(s.charAt(i+1))){
            sum += m.get(s.charAt(i+1)) - m.get(s.charAt(i));
            i +=2;
        }
        else{
            sum += m.get(s.charAt(i));
            i++;
        }
    }
    return sum;
    }
}