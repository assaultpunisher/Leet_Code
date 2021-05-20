class Solution
{
	public List<List<Integer>> fourSum(int[] A, int target)
	{
		Arrays.sort(A);
		return kSum(A, 0, A.length - 1, target, 4);
	}

	private List<List<Integer>> kSum(int[] A, int start, int end, int target, int k)
	{
		List<List<Integer>> list = new ArrayList<>();
		
		if(k == 2)
		{
			while(start < end)
			{
				if(A[start] + A[end] == target)
				{
					list.add(new LinkedList<Integer>(Arrays.asList(A[start], target - A[start])));
					while(start < end && A[start] == A[start + 1]) start++;
					while(start < end && A[end] == A[end - 1])     end--;
					start++; end--;
				}
				else if (A[start] + A[end] < target)
				{
					start++;
				}
				else
				{
					end--;
				}
			}
		}
		else // Reduce kSum to (k - 1)sum
		{
			for(int i = start; i < A.length - k + 1 && A[i] * k <= target; i++)
			{
				if(i == start || A[i] != A[i - 1])
				{
					List<List<Integer>> mainList = kSum(A, i + 1, A.length - 1, target - A[i], k - 1);
					
					for(List<Integer> subList : mainList)
					{
						subList.add(0, A[i]);
					}
					list.addAll(mainList);
				}
			}	
		}
		return list;
	}
}