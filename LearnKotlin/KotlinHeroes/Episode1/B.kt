fun main() 
{
  val n=readLine()!!.toInt()
  val a=readLine()!!.split(" ").map{it.toInt()}
  var p1=0;var p2=0;var v=0
  for(i in 0..a.size-1)
  {
    if(p2>a[i]) v++
    if(p1<a[i])
    {
      p2=p1
      p1=a[i]
    } 
    else if(p2<a[i])
      p2=a[i]
  }
  print(v)
}
