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
int main() {
    auto candidate = minPath;
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3}), (std::vector<long>)std::vector<long>({(long)4, (long)5, (long)6}), (std::vector<long>)std::vector<long>({(long)7, (long)8, (long)9})})), (3)) == (std::vector<long>({(long)1, (long)2, (long)1})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)5, (long)9, (long)3}), (std::vector<long>)std::vector<long>({(long)4, (long)1, (long)6}), (std::vector<long>)std::vector<long>({(long)7, (long)8, (long)2})})), (1)) == (std::vector<long>({(long)1})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2, (long)3, (long)4}), (std::vector<long>)std::vector<long>({(long)5, (long)6, (long)7, (long)8}), (std::vector<long>)std::vector<long>({(long)9, (long)10, (long)11, (long)12}), (std::vector<long>)std::vector<long>({(long)13, (long)14, (long)15, (long)16})})), (4)) == (std::vector<long>({(long)1, (long)2, (long)1, (long)2})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)6, (long)4, (long)13, (long)10}), (std::vector<long>)std::vector<long>({(long)5, (long)7, (long)12, (long)1}), (std::vector<long>)std::vector<long>({(long)3, (long)16, (long)11, (long)15}), (std::vector<long>)std::vector<long>({(long)8, (long)14, (long)9, (long)2})})), (7)) == (std::vector<long>({(long)1, (long)10, (long)1, (long)10, (long)1, (long)10, (long)1})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)8, (long)14, (long)9, (long)2}), (std::vector<long>)std::vector<long>({(long)6, (long)4, (long)13, (long)15}), (std::vector<long>)std::vector<long>({(long)5, (long)7, (long)1, (long)12}), (std::vector<long>)std::vector<long>({(long)3, (long)10, (long)11, (long)16})})), (5)) == (std::vector<long>({(long)1, (long)7, (long)1, (long)7, (long)1})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)11, (long)8, (long)7, (long)2}), (std::vector<long>)std::vector<long>({(long)5, (long)16, (long)14, (long)4}), (std::vector<long>)std::vector<long>({(long)9, (long)3, (long)15, (long)6}), (std::vector<long>)std::vector<long>({(long)12, (long)13, (long)10, (long)1})})), (9)) == (std::vector<long>({(long)1, (long)6, (long)1, (long)6, (long)1, (long)6, (long)1, (long)6, (long)1})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)12, (long)13, (long)10, (long)1}), (std::vector<long>)std::vector<long>({(long)9, (long)3, (long)15, (long)6}), (std::vector<long>)std::vector<long>({(long)5, (long)16, (long)14, (long)4}), (std::vector<long>)std::vector<long>({(long)11, (long)8, (long)7, (long)2})})), (12)) == (std::vector<long>({(long)1, (long)6, (long)1, (long)6, (long)1, (long)6, (long)1, (long)6, (long)1, (long)6, (long)1, (long)6})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)2, (long)7, (long)4}), (std::vector<long>)std::vector<long>({(long)3, (long)1, (long)5}), (std::vector<long>)std::vector<long>({(long)6, (long)8, (long)9})})), (8)) == (std::vector<long>({(long)1, (long)3, (long)1, (long)3, (long)1, (long)3, (long)1, (long)3})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)6, (long)1, (long)5}), (std::vector<long>)std::vector<long>({(long)3, (long)8, (long)9}), (std::vector<long>)std::vector<long>({(long)2, (long)7, (long)4})})), (8)) == (std::vector<long>({(long)1, (long)5, (long)1, (long)5, (long)1, (long)5, (long)1, (long)5})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)2}), (std::vector<long>)std::vector<long>({(long)3, (long)4})})), (10)) == (std::vector<long>({(long)1, (long)2, (long)1, (long)2, (long)1, (long)2, (long)1, (long)2, (long)1, (long)2})));
    assert(candidate((std::vector<std::vector<long>>({(std::vector<long>)std::vector<long>({(long)1, (long)3}), (std::vector<long>)std::vector<long>({(long)3, (long)2})})), (10)) == (std::vector<long>({(long)1, (long)3, (long)1, (long)3, (long)1, (long)3, (long)1, (long)3, (long)1, (long)3})));
}