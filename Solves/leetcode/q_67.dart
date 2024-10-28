class Solution {
  String addBinary(String a, String b) {
    StringBuffer buffer=StringBuffer();
    int i=a.length-1;
    int j=b.length-1;
    int c=0;
    while(i>=0||j>=0) {
        int s=c;
        if(i>=0)
            s+=int.parse(a[i]);
        if(j>=0)
            s+=int.parse(b[j]);
        if(s==0||s==1)
        {
            buffer.write(s);
            c=0;
        } else if(s==2)
        {
            buffer.write("0");
            c=1;
        } else {
            buffer.write("1");
            c=1;
        }
        i--;
        j--;
    }
    if(c==1) {
        buffer.write("1");
    }
    return buffer.toString().split("").reversed.join();
  } 
}