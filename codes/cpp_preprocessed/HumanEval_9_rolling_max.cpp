#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> rolling_max(std::vector<long> numbers) {
    std::vector<long> result;
    long running_max = 0;
    for (long n : numbers) {
        running_max = std::max(running_max, n);
        result.push_back(running_max);
    }
    return result;
}
