class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);
        for (int i = 2; i <= rowIndex; ++i) {
            const int elementCount = i + 1;
            int prev = row[0];
            for (int j = 1, bound = elementCount - elementCount / 2; j < bound; ++j) {
                const int current = row[j];
                row[i - j] = row[j] += prev;
                prev = current;
            }
        }
        
        return row;
    }
};