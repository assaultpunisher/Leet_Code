class Solution:
	def getRow(self, rowIndex: int) -> List[int]:
		if rowIndex == 0:
			return [1]
		prev_row = [1,1]
		if rowIndex == 1:
			return prev_row
		for i in range(3,rowIndex+2):
		# Intial 1
			curr_row = [1]
			for j in range(0 , len(prev_row)-1):
				curr_row.append(prev_row[j] + prev_row[j+1])
		# Last 1
			curr_row.append(1)
			prev_row = curr_row

		return curr_row