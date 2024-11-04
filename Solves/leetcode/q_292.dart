// https://math.stackexchange.com/questions/4392676/nim-game-use-mod-to-prove-winning-strategy-when-we-start-first-and-we-have-1-2
class Solution {
  bool canWinNim(int n) {
    return n%4!=0;
  }
}