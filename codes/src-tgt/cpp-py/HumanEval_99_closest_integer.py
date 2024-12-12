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


### Python version

def closest_integer(value: str) -> int:
    from math import floor, ceil

    if value.count('.') == 1:
        # remove trailing zeros
        while (value[-1] == '0'):
            value = value[:-1]

    num = float(value)
    if value[-2:] == '.5':
        if num > 0:
            res = ceil(num)
        else:
            res = floor(num)
    elif len(value) > 0:
        res = int(round(num))
    else:
        res = 0

    return res
