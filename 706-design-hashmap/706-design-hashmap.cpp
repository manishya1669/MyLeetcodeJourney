class MyHashMap {
public:
   int v[1000000]={-1};
    MyHashMap() {
       for(int i=0;i<1000000;i++)
           v[i]=-1;     
    }
    
    void put(int key, int value) {
        v[key%1000000]=value;
    }
    
    int get(int key) {
        return v[key%1000000];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */