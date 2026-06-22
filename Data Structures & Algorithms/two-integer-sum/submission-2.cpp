class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>results;

        for(int i=0;i<nums.size();i++){
            int comp = target-nums[i];

            if(results.find(comp) != results.end()){
                return {results[comp],i};
            }

            results[nums[i]] = i ;
        }
        return {};
        
    }
};
