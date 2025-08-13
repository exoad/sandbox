class Solution {
    static const List<String> ones = <String>["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"];
    static const List<String> tens = <String>["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"];
    static const List<String> hundreds = <String>["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"];
    static const List<String> thousands = <String>["", "M", "MM", "MMM"];

    String intToRoman(int num) {
        return thousands[num ~/ 1000] 
            + hundreds[(num % 1000) ~/ 100] 
            + tens[(num % 100) ~/ 10] 
            + ones[num % 10];
    }
}
