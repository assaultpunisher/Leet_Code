class Solution
{
	public int removeDuplicates(int[] A)
	{
		int i = 0;
		int K = 2;								// Duplicates will appear at most 2 times
		
		for(int n : A)
		{
			if(i < K || n > A[i - K])
			{
				A[i++] = n;
			}	
		}
		return i;
	}
}