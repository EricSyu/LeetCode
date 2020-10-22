class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        vector<int> indices;
        for(int i=0; i<nums.size(); i++){
            map.insert(pair<int,int>(nums.at(i),i));
        }
        for(int i=0; i<nums.size(); i++){
            int c = target-nums.at(i);
            if(map.find(c)!=map.end() && map.at(c)!=i){
                indices.push_back(i);
                indices.push_back(map.at(c));
                break;
            }
        }
        
        return indices;
    }
};