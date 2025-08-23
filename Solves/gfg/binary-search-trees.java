// User function Template for Java

class Solution {
    static boolean isBSTTraversal(int arr[]) {
        // code here
        for(int i = 1; i < arr.length; i++) {
            if(arr[i] <= arr[i - 1]) {
                return false;
            }
        }
        return true;
    }
}
