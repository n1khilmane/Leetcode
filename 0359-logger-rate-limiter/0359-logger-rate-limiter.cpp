class Logger {
public:
    
    unordered_map<string,int> mytime;
    
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        
        if(mytime.find(message) == mytime.end()){
            
            mytime[message] = timestamp+10;
            return true;
        }
        
        else if(timestamp >= mytime[message])
        {
            mytime[message] = timestamp+10;
            return true;
        }
        
        else{
            return false;
        }
        
        return true;
        
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */