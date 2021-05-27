class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) { return 0; }
		int length = matrix[0].size();
		int res = 0;
		vector<int> current_row(length+1);
		current_row[length] = -1;
		for (int i = 0; i < matrix.size(); i++) {
			
			for (int j = 0; j < length; j++) {
				
				if (matrix[i][j] == '1') { current_row[j]++; }
				else { current_row[j] = 0; }
			}
			
			stack<int> st;
			current_row[length] = -1;
			
			for (int m = 0; m <= length; m++) {
				while (!st.empty() && current_row[st.top()] > current_row[m]) {
					int top=st.top();
					st.pop();
					int bot = 0;
					if (!st.empty()) {
						bot = m - st.top() -1;
					}
					else {
						bot = m;
					}
					res = (bot * current_row[top]) > res ? (bot * current_row[top]) : res;
				}
				st.push(m);
			}
		}
		return res;
    }
};