class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(unsigned int i=0; i<nums.size(); i++){
            for(unsigned int j=i+1; j<nums.size(); j++){
                if(nums.at(i)+nums.at(j) == target){
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
        return indices;
    }
};