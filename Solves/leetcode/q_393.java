class Solution {
    public boolean validUtf8(int[] data) {
        int r=0;
        for(int c:data)
        {
            if(r==0)
            {
                if(c>>5==0b110)
                    r=1;
                else if(c>>4==0b1110)
                    r=2;
                else if(c>>3==0b11110)
                    r=3;
                else if(c>>7==1)
                    return false;
            }
            else
            {
                if(c>>6!=0b10)
                    return false;
                r--;
            }
        }
        return r==0;
    }
}