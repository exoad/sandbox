class Solution {
  int daysBetweenDates(String date1, String date2) {
    List<String> a=date1.split("-");
    List<String> b=date2.split("-");
    DateTime c=DateTime(int.parse(a[0]),int.parse(a[1]),int.parse(a[2]));
    DateTime d=DateTime(int.parse(b[0]),int.parse(b[1]),int.parse(b[2]));
    return c.isAfter(d)?c.difference(d).inDays:d.difference(c).inDays;
  }
}