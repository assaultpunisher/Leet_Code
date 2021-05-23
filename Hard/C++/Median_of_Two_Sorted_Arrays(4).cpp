class Solution {
public:
     double findMedianSortedArrays(vector<int>& arr, vector<int>& brr) {
        int n=arr.size();
        int m=brr.size();
        if(m<n)
        {
            vector<int> temp = arr;
            arr = brr;
            brr = temp;
            swap(m,n);
        }
        int l = 0, r = n;
        while(l<=r)
        {
            int i = (l+r)/2;
            int j = (n+m+1)/2-i;
            int min1 = (i==n)?INT_MAX:arr[i];
            int max1 = (i==0)?INT_MIN:arr[i-1];
            int min2 = (j==m)?INT_MAX:brr[j];
            int max2 = (j==0)?INT_MIN:brr[j-1];
            
            if(max2<=min1 && max1<=min2)
            {
                if((m+n)%2==0)
                {
                    return ((double)max(max1,max2)+min(min1,min2))/2;
                }
                else
                {
                    return max(max1,max2);
                }
            }
            if(min1<max2)
                l = i+1;
            else if(min2<max1)
                r = i-1;
        }
        return -1;
    }
};