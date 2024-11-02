class Solution {
  String convertDateToBinary(String date) {
    List<String> r=date.split("-");
    return "${int.parse(r[0]).toRadixString(2).replaceAll(RegExp(r"^0+(?=.)"),"")}-${int.parse(r[1]).toRadixString(2).replaceAll(RegExp(r"^0+(?=.)"),"")}-${int.parse(r[2]).toRadixString(2).replaceAll(RegExp(r"^0+(?=.)"),"")}";
  }
}