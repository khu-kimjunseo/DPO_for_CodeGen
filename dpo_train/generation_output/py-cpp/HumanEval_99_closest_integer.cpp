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
    std::stringstream ss(value);
    std::string word;
    long res = 0;
    while (std::getline(ss, word)) {
        res += closest_integer(word);
    }
    return res;
}

int main() {
    std::string value;
    std::getline(std::cin, value);
    std::cout << closest_integer(value) << std::endl;
    return 0;
}
