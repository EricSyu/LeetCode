class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for i in range(0, len(nums)):
            v = target - nums[i]
            if v in dic:
                return [i, dic[v]] if i<dic[v] else [dic[v], i]
            dic[nums[i]] = i
            
