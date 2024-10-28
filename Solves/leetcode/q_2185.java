class Solution {
    public int prefixCount(String[] words, String pref) {
       int i=0;
       for(String r:words)
            if(r.startsWith(pref))
                i++;
        return i; 
    }
}