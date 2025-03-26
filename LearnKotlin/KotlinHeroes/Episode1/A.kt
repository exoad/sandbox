fun main() 
{
  val q=readLine()!!.toInt()
  repeat(q)
  {
    val (x,y)=readLine()!!.split(" ").map{it.toInt()}.sorted()
    println("${x-1} 1 ${y-x+1}")
  }
}
