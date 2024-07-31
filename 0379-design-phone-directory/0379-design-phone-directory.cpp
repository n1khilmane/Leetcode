class PhoneDirectory {
    vector<int> val;
    int pos;
public:
    PhoneDirectory(int maxNumbers) {
        val = vector<int>(maxNumbers, 0);
        for (int i = 0; i < maxNumbers; ++i) 
            val[i] = (i + 1) % maxNumbers;
        pos = 0;
    }
    int get() {
        if (val[pos] == -1) return -1;
        int v = pos;
        pos = val[pos];
        val[v] = -1;
        return v;
    }
    bool check(int number) {
        return val[number] != -1;
    }
    void release(int number) {
        if (val[number] == -1)
        {
            val[number] = pos;
            pos = number;
        }
    }
};

/**
 * Your PhoneDirectory object will be instantiated and called as such:
 * PhoneDirectory* obj = new PhoneDirectory(maxNumbers);
 * int param_1 = obj->get();
 * bool param_2 = obj->check(number);
 * obj->release(number);
 */