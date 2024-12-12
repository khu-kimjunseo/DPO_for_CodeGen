#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long max_fill(std::vector<std::vector<long>> grid, long capacity) {
    long sum = 0;
    for (auto arr : grid) {
        sum += ceil(std::accumulate(arr.begin(), arr.end(), 0.0) / capacity);
    }
    return sum;
}
