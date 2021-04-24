class Solution:
    def firstBadVersion(self, n):
        lef=1
        rig=n
        while(lef<rig):
            mid=lef+(rig-lef)//2
            if isBadVersion(mid)==True:
                rig=mid
            else:
                lef=mid+1
        return lef