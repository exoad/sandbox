class Solution {
    static boolean isVowel(char a) {
        final char x = Character.toLowerCase(a); 
        return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
    }

    public String reverseVowels(String s) {
        final char[] chars = s.toCharArray();
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            while (l < r && !isVowel(chars[l])) {
                l++;
            }
            while (l < r && !isVowel(chars[r])) {
                r--;
            }
            if (l < r) {
                final char temp = chars[l];
                chars[l] = chars[r];
                chars[r] = temp;
                l++;
                r--;
            }
        }
        return new String(chars);
    }
}
