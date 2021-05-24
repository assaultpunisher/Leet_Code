class Solution {
    public int largestRectangleArea(int[] heights) {
        if(heights == null || heights.length == 0) return 0;
        int n=heights.length;
        Stack<Integer>st=new Stack<>();
        int area=0;
        for(int i=0;i<=n;i++)
        {
            int h = ( i==n ? 0:heights[i] );
            if(st.isEmpty() || h>=heights[st.peek()] )
                st.push(i);
            else
            {
                int tmp=st.pop();
                area=Math.max( area , heights[tmp]*(st.isEmpty()?i:i-st.peek()-1) ) ;
                i--;
            }
        }
        return area;
    }
}