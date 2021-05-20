class Solution:
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = []
        z = 0
        pos = {}
        neg = {}
        
        # split positive, negative, and zero 
        # using dictionary in storing True or False for duplicated number
        for n in nums:
            if n == 0:
                z += 1
            elif n > 0:
                pos[n] = True if n in pos else False
            else:
                neg[n] = True if n in neg else False
        
        if z:
            # case 1: all zero
            if z >= 3:
                ans.append([0, 0, 0])
            # case 2: [-x, 0, x]
            for p in pos:
                if -p in neg:
                    ans.append([-p, 0, p])
        
        
        for p in pos:
            for n in neg:
                x = -p-n
                # case 3: x + p + n = 0 where [n < p < x]
                if (x in pos) and ( (pos[x] and x == p) or p < x):
                    ans.append([n, p, x])
                # case 4: x + p + n = 0 where [x < n < p]
                if (x in neg) and ( (neg[x] and x == n) or x < n):
                    ans.append([n, p, x])
        
        return ans