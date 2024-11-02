class Solution {

int calPoints(List<String> operations) {
    List<int> r=<int>[];
    for(int i=0;i<operations.length;i++){
        int? x=int.tryParse(operations[i]);
        if(x!=null)
            r.add(x);
        else if(operations[i]=="C")
            r.removeLast();
        else if(operations[i]=="D")
            r.add(r.last*2);
        else if(operations[i]=="+"&&i>1)
            r.add(r.last+r[r.length-2]);
    }
    int s=0;
    for(int t in r)
        s+=t;
    return s;
  }
}