class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> countMap;
        for( auto num : nums ){
            if(countMap.find(num) != countMap.end()){
                return true;
            }
            countMap[num] = 1;
        }
        return false;
    }
};