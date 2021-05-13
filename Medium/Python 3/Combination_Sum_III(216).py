class Solution(object):
    def combinationSum3(self, k, n):
        def helper(k, n, bound):
            if bound == 0 or k == 0:
                return []
            elif k == 1:
                if 1 <= n <= bound:
                    return [[n]]
                else:
                    return []
            res = []
            for tail in range(min(n,bound),0,-1):
                tmp = helper(k-1, n - tail, tail-1)
                for x in tmp:
                    x.append(tail)
                res += tmp
            return res
        return helper(k, n, 9)