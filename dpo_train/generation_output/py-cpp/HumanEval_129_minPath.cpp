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

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> minPath(std::vector<std::vector<long>> grid, long k) {
    std::vector<long> ans;
    std::vector<long> tmp;
    std::vector<long> tmp2;
    std::vector<long> tmp3;
    std::vector<long> tmp4;
    std::vector<long> tmp5;
    std::vector<long> tmp6;
    std::vector<long> tmp7;
    std::vector<long> tmp8;
    std::vector<long> tmp9;
    std::vector<long> tmp10;
    std::vector<long> tmp11;
    std::vector<long> tmp12;
    std::vector<long> tmp13;
    std::vector<long> tmp14;
    std::vector<long> tmp15;
    std::vector<long> tmp16;
    std::vector<long> tmp17;
    std::vector<long> tmp18;
    std::vector<long> tmp19;
    std::vector<long> tmp20;
    std::vector<long> tmp21;
    std::vector<long> tmp22;
    std::vector<long> tmp23;
    std::vector<long> tmp24;
    std::vector<long> tmp25;
    std::vector<long> tmp26;
    std::vector<long> tmp27;
    std::vector<long> tmp28;
    std::vector<long> tmp29;
    std::vector<long> tmp30;
    std::vector<long> tmp31;
    std::vector<long> tmp32;
    std::vector<long> tmp33;
    std::vector<long> tmp34;
    std::vector<long> tmp35;
    std::vector<long> tmp36;
    std::vector<long> tmp37;
    std::vector<long> tmp38;
    std::vector<long> tmp39;
    std::vector<long> tmp40;
    std::vector<long> tmp41;
    std::vector<long> tmp42;
    std::vector<long> tmp43;
    std::vector<long> tmp44;
    std::vector<long> tmp45;
    std::vector<long> tmp46;
    std::vector<long> tmp47;
    std::vector<long> tmp48;
    std::vector<long> tmp49;
    std::vector<long> tmp50;
    std::vector<long> tmp51;
    std::vector<long> tmp52;
    std::vector<long> tmp53;
    std::vector<long> tmp54;
    std::vector<long> tmp55;
    std::vector<long> tmp56;
    std::vector<long> tmp57;
    std::vector<long> tmp58;
    std::vector<long> tmp59;
    std::vector<long> tmp60;
    std::vector<long> tmp61;
    std::vector<long> tmp62;
    