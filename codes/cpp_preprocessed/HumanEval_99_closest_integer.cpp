#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long closest_integer(std::string value) {
    std::regex pattern("\\.0+$");
    value = std::regex_replace(value, pattern, "");
    double num = std::stod(value);
    if (value.back() == '5') {
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    } else {
        return std::round(num);
    }
}
