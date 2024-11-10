class Solution {
    public List<String> printVertically(String s) {
        String[] ix=s.split(" ");
        int mx=-1;
        for(String tx:ix)
        {
            if(tx.length()>mx)
                mx=tx.length();
        }
        List<String> ax=new ArrayList<>(mx);
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<mx;i++)
        {
            sb.setLength(0);
            for(String tx:ix)
            {
                if(i<tx.length())
                    sb.append(tx.charAt(i));
                else
                    sb.append(" ");
            }
            ax.add(sb.toString().stripTrailing());
        }
        return ax;
    }
}