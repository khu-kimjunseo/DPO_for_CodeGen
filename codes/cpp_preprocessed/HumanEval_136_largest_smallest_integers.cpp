#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::tuple<std::optional<long>, std::optional<long>> largest_smallest_integers(std::vector<long> lst) {
    std::optional<long> smallest;
    std::optional<long> largest;
    for (auto i : lst) {
        if (i < 0 && (!smallest || i > *smallest)) {
            smallest = i;
        }
        if (i > 0 && (!largest || i < *largest)) {
            largest = i;
        }
    }
    return std::make_tuple(smallest, largest);
}
