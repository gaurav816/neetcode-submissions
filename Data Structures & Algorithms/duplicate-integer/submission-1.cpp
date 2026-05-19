class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> counterMap;
        for(int i = 0; i < nums.size(); i++){
            counterMap[nums[i]]++;
        }
        for(auto num : nums){
            if(counterMap[num] > 1){
                return true;
            }
        }
        return false;
    }
    
};