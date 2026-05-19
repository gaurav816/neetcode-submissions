class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i = 0; auto n : nums){
            int complement = target - n;
            if(mpp.find(complement) != mpp.end()){
                return {mpp[complement], i};
            }
            mpp[n] = i;
            i++;
        }
        return {};
    }
};
