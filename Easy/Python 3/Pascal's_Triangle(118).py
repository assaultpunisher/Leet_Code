class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l=[[]]
        for i in range(numRows):
            c=[]
            for j in range(i+1):
                n=math.factorial(i)//(math.factorial(i-j)*math.factorial(j))
                c.append(n)
            l.append(c)
        return l[1:]