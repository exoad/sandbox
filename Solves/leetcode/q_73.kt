class Solution {
    fun setZeroes(matrix: Array<IntArray>) {
        val rows = mutableSetOf<Int>()
        val cols = mutableSetOf<Int>()
         repeat(matrix.size) { i ->
            repeat(matrix[i].size) { j->
                if(matrix[i][j] == 0) {
                    rows.add(i)
                    cols.add(j)
                }
            }
        }
        repeat(matrix.size) { i ->
            repeat(matrix[i].size) { j ->
                if(i in rows || j in cols) {
                    matrix[i][j] = 0
                }
            }
        }
    }
}
