class MyHashSet {
public:
    vector<int> ix;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))
            ix.push_back(key);
    }
    
    void remove(int key) {
        if(contains(key))
            ix.erase(std::remove(ix.begin(),ix.end(),key),ix.end());
    }
    
    bool contains(int key) {
        return find(ix.begin(),ix.end(),key)!=ix.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */