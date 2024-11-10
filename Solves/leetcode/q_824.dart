class Solution {
  String toGoatLatin(String sentence) {
    StringBuffer ax=StringBuffer();
    List<String> tx=sentence.split(" ");
    for(int i=0;i<tx.length;i++){
        String px=tx[i][0].toLowerCase();
        px=="a"||px=="i"||px=="e"||px=="o"||px=="u"?(ax.write(tx[i])):(ax..write(tx[i].substring(1))..write(tx[i][0]));
        ax..write("ma")..write("a"*(i+1));
        if(i<tx.length-1)
            ax.write(" ");
    }
    return ax.toString();
  }
}
