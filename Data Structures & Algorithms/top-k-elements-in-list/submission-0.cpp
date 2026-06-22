class Solution {
public:
    
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> store;
        vector<int> result;
        
        
        for(int num : nums) {
            store[num]++;
        }
        
        
        vector<pair<int, int>> A;
        for (auto& it : store) {
            A.push_back({it.first, it.second});
        }
        
        
        sort(A.begin(), A.end(), cmp);
        
        
        for(int i = 0; i < k; i++) {
            result.push_back(A[i].first);
        }
        
        return result;
    }
};