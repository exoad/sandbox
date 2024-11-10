class MyHashMap {
  List<int> ix=List<int>.filled(1e6.toInt()+1,-1);
  MyHashMap() {
    
  }
  
  void put(int key, int value) {
    ix[key]=value;
  }
  
  int get(int key) {
    return ix[key];
  }
  
  void remove(int key) {
    ix[key]=-1;
  }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = MyHashMap();
 * obj.put(key,value);
 * int param2 = obj.get(key);
 * obj.remove(key);
 */