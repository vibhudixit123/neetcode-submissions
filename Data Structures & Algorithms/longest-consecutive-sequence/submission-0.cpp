class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> strSet(nums.begin(),nums.end());
        int longest = 0;

        for(int num:strSet){
            if(strSet.find(num-1) == strSet.end()){
                int len = 1;
                while(strSet.find(num+len) != strSet.end()){
                    len++;
                }
                longest = max(longest,len);
            }
        }
        return longest;
        
    }
};
