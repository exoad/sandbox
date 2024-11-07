class Solution {
  bool checkTwoChessboards(String coordinate1, String coordinate2) {
    return (coordinate1[0].codeUnits[0]+coordinate1[1].codeUnits[0])%2==(coordinate2[0].codeUnits[0]+coordinate2[1].codeUnits[0])%2;
  }
}