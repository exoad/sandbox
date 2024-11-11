class BrowserHistory {
  List<String> ix;
  int px;
  BrowserHistory(String homepage):ix=<String>[],px=0 {
    ix.add(homepage);
  }
  
  void visit(String url) {
    ix.removeRange(px+1,ix.length);
    ix.add(url);
    px++;
  }
  
  String back(int steps) {
    px=max(px-steps,0);
    return ix[px];
  }
  
  String forward(int steps) {
    px=min(ix.length-1,px+steps);
    return ix[px];
  }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = BrowserHistory(homepage);
 * obj.visit(url);
 * String param2 = obj.back(steps);
 * String param3 = obj.forward(steps);
 */