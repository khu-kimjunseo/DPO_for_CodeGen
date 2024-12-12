#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool is_sorted(std::vector<long> lst) {
    std::map<long, long> count_digit;
    for (auto i: lst) {
        count_digit[i]++;
    }
    for (auto i: lst) {
        if (count_digit[i] > 2) {
            return false;
        }
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] > lst[i]) {
            return false;
        }
    }
    return true;
}
