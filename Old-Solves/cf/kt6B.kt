fun getArr() : List<Int> {
  val t = mutableListOf<Int>()
    readLine()!!.split(' ').forEach( {t.add(it.toInt())})
      return t
}
     
fun main() {
  val am = readLine()!!.toInt()
    repeat(am) {
      val (x, y) = getArr()
     
      var a = 0L;
      var tb = y
      tb /= x
      a += (y% x)
      while (tb != 0) {
        a += tb % 10
        tb /= 10
      }
     
      println(a + y/y - 1)
    }
}
