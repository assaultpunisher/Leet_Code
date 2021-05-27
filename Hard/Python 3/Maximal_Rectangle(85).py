class Solution:
    def maximalRectangle(self, A: List[List[str]]) -> int:
    	m, B, b, C, c = len(A), 0, 0, [], []
    	if m == 0: return 0
    	n = len(A[0])
    	for i in range(m):
    		if A[i][0] == "0": A[i][0] = b = 0
    		else: A[i][0], b, B = 1, b + 1, max(B, b+1)
    	for j in range(1,n):
    		for i in range(m):
    			if A[i][j] == "0":
    				A[i][j] = 0
    				if len(c) > 0: C, c = C + [c], []
    			else: A[i][j], c = A[i][j-1] + 1, c + [A[i][j-1] + 1]
    		if len(c) > 0: C, c = C + [c], []
    	for c in C:
    		for i in range(1,len(c) + 1):
    			for j in range(len(c) + 1 - i):
    				B = max(B, min(c[j:j+i])*i)
    	return B