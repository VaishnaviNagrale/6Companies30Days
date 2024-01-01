class DataStream {
public:
    int value,k,freq;
    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
        freq = 0;
    }
    
    bool consec(int num) {
        if(num==value){
            freq++;
        }else{
            freq = 0;
        }
        if(freq>=k){
            return true;
        }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */