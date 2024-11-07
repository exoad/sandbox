class Solution {
    bool squareIsWhite(String a) {
        return (a[0].codeUnits[0]+a[1].codeUnits[0])%2==1;
    }
}