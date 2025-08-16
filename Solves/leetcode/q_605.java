class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        if(flowerbed.length == 0 || n == 0) {
            return true;
        }
        for(int i = 0; i < flowerbed.length;) {
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.length - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                n--;
                i += 2;
            } else {
                i++;
            }
            if(n == 0) {
                return true;
            }
        }
        return n == 0;
    }
}
