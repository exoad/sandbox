class Solution {
  static const List<String> months=<String>["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"];

  String reformatDate(String date) {
    List<String> r=date.split(" ");
    return "${r[2]}-${(months.indexOf(r[1])+1).toString().padLeft(2,"0")}-${r[0].length==3?r[0][0].padLeft(2,"0"):r[0][0]+r[0][1]}";
  }
}