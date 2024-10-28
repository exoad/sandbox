class Solution {
    public String thousandSeparator(int n) {
        return String.format("%,d",n).replaceAll(",",".");
    }
}