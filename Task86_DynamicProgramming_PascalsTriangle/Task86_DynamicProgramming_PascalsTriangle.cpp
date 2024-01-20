#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        for (int i = 0; i < numRows;i++) {
            result.push_back(std::vector<int>(i + 1, 1));
        }
        for (int i = 2;i < numRows;i++) {
            for (int j = 1;j < i;j++) {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }
        return result;
    }
};