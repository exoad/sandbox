// i was too lazy to code it algorithmically :P
class Solution {
  final RegExp rx1=RegExp(r"^[qwertyuiop]+$");
  final RegExp rx2=RegExp(r"^[asdfghjkl]+$");
  final RegExp rx3=RegExp(r"^[zxcvbnm]+$");
  List<String> findWords(List<String> words) {
    List<String> ax=<String>[];
    for(String px in words){
        String r=px.toLowerCase();
        bool px1=rx1.hasMatch(r);
        bool px2=rx2.hasMatch(r);
        bool px3=rx3.hasMatch(r);
        if((!px1&&px2&&!px3)||(px1&&!px2&&!px3)||(!px1&&!px2&&px3))
            ax.add(px);
    }
    return ax;
  }
}
