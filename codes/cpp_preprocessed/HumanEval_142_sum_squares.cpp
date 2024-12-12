#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long sum_squares(std::vector<long> lst) {
    long result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            result += lst[i] * lst[i];
        } else if (i % 4 == 0) {
            result += lst[i] * lst[i] * lst[i];
        } else {
            result += lst[i];
        }
    }
    return result;
}
