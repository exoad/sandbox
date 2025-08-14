class Solution {
    fun largestGoodInteger(num: String): String {
        for (digit in '9' downTo '0')
        {
            val a = "$digit$digit$digit"
            if (num.contains(a)) 
            {
                return a
            }
        }
        return ""
    }
}
