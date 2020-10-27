/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let dic = {};
    for (let i = 0; i < nums.length; i++) {
        let s = target - nums[i];
        if (s in dic)
            return [i, dic[s]]
        dic[nums[i]] = i;
    }
};
