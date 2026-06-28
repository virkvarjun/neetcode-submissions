class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]: 
        res = [] 
        def dfs(i, cur, total): 
            if total == target: 
                res.append(cur[:]) # continue to use cur and not to modify
                return 
            if i >= len(nums) or total > target: 
                return 
            # Can Include
            cur.append(nums[i]) 
            dfs(i, cur, total + nums[i]) 
            cur.pop() 
            dfs(i+1, cur, total) # Can't choose the same one 
        dfs(0, [], 0) 
        return res
            

