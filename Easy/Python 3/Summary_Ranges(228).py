class Solution:
    def summaryRanges(self,s:List[int])->List[str]:
        if(len(s)==0):
            return []
        s.append(-1)
        i,j=0,0
        d=[]
        while(i<len(s)-1):
            st=""+str(s[i])
            j=i
            while(i<len(s)-1 and s[i]+1==s[i+1]):
                i+=1
            # print(s[i],i,j)
            if(i==j):
                d.append(st)
            else:
                j=i+1
                st+="->"
                st+=str(s[i])
                d.append(st)
            i+=1
        return d