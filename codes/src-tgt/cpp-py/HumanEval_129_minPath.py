### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> minPath(std::vector<std::vector<long>> grid, long k) {
    long n = grid.size();
    long val = n * n + 1;
    for (long i = 0; i < n; i++) {
        for (long j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                std::vector<long> temp;
                if (i != 0) {
                    temp.push_back(grid[i - 1][j]);
                }

                if (j != 0) {
                    temp.push_back(grid[i][j - 1]);
                }

                if (i != n - 1) {
                    temp.push_back(grid[i + 1][j]);
                }

                if (j != n - 1) {
                    temp.push_back(grid[i][j + 1]);
                }

                val = *std::min_element(temp.begin(), temp.end());
            }
        }
    }

    std::vector<long> ans;
    for (long i = 0; i < k; i++) {
        if (i % 2 == 0) {
            ans.push_back(1);
        } else {
            ans.push_back(val);
        }
    }
    return ans;
}


### Python version

from typing import List

def minPath(grid: List[List[int]], k: int) -> List[int]:
    n = len(grid)
    val = n * n + 1
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                temp = []
                if i != 0:
                    temp.append(grid[i - 1][j])

                if j != 0:
                    temp.append(grid[i][j - 1])

                if i != n - 1:
                    temp.append(grid[i + 1][j])

                if j != n - 1:
                    temp.append(grid[i][j + 1])

                val = min(temp)

    ans = []
    for i in range(k):
        if i % 2 == 0:
            ans.append(1)
        else:
            ans.append(val)
    return ans
