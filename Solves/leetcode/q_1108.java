class Solution {
    public String defangIPaddr(String address) {
        StringBuilder sb=new StringBuilder();
        for(String r:address.split(""))
            sb.append(r.equals(".")?"[.]":r);
        return sb.toString();
    }
}