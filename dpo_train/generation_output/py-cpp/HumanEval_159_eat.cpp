### Python version

from typing import List

def eat(number: int, need: int, remaining: int) -> List[int]:
    if(need <= remaining):
        return [ number + need , remaining-need ]
    else:
        return [ number + remaining , 0]

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
std::vector<long> eat(long number, long need, long remaining) {
    std::vector<long> result;
    if(need <= remaining) {
        result.push_back(number + need);
        return result;
    }
    else {
        result.push_back(remaining-need);
        return result;
    }
}

std::string to_string(long number) {
    std::stringstream ss;
    ss << number;
    return ss.str();
}

std::string to_string(long number, long need) {
    std::stringstream ss;
    ss << number << " " << need;
    return ss.str();
}

std::string to_string(long number, long need, long remaining) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3, long need4) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3 << " " << need4;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3, long need4, long need5) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3 << " " << need4 << " " << need5;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3, long need4, long need5, long need6) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3 << " " << need4 << " " << need5 << " " << need6;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3, long need4, long need5, long need6, long need7) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3 << " " << need4 << " " << need5 << " " << need6 << " " << need7;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2, long need3, long need4, long need5, long need6, long need7, long need8) {
    std::stringstream ss;
    ss << number << " " << need << " " << remaining << " " << need2 << " " << need3 << " " << need4 << " " << need5 << " " << need6 << " " << need7 << " " << need8;
    return ss.str();
}

std::string to_string(long number, long need, long remaining, long need2