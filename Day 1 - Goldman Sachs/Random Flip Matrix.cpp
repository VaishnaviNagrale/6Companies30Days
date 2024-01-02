class Solution {
public:
    int m, n;
    int i = 0, j = 0;
    vector<pair<int, int>> vp;
    Solution(int m, int n) {
        this->m = m;
        this->n = n;
        vp.clear();
    }

    vector<int> flip() {
        int i = rand() % m;
        int j = rand() % n;
        pair<int, int> newPair = {i, j};

        while (find(vp.begin(), vp.end(), newPair) != vp.end()) {
            i = rand() % m;
            j = rand() % n;
            newPair = {i, j};
        }

        vp.push_back(newPair);
        return {i, j};
    }

    void reset() { vp.clear(); }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */