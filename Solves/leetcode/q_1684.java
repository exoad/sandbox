// DONT USE REGEX LOL
class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int r=0;
        for(int i=0;i<words.length;i++)
            if(words[i].matches("^["+allowed+"]*+$"))
                r++;
        return r;
    }
}