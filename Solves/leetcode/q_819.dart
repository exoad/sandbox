class Solution {
  String mostCommonWord(String paragraph, List<String> banned){
    Set<String> seen=banned.toSet();
    Map<String,int> r=<String,int>{};
    String max="";
    for(String p in paragraph.split(RegExp(r"[ ,]+"))){
        String t=p.replaceAll(RegExp(r"[^\w\s]"),"").trim().toLowerCase();
        if(seen.lookup(t)==null){
            r.containsKey(t)?r[t]=r[t]!+1:r[t]=1;
            if(max==""||r[t]!>r[max]!){
                max=t;
            }
        }
    }
    return max;
  }
}