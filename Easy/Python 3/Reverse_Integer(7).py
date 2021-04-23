class Solution:
    def reverse(self, n):
        
        # single digit cases
        if abs(n) < 10: return n
        
        # reverse w/o neg sign
        r = int(str(abs(n))[::-1])
        
        # overflow edge cases
        if r >= pow(2,31):
            return 0
        
        # dont forget the neg sign    
        return r if n > 0 else -r