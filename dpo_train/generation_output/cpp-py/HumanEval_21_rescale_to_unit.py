### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_number = *std::min_element(numbers.begin(), numbers.end());
    float max_number = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (auto x : numbers) {
        result.push_back((x - min_number) / (max_number - min_number));
    }
    return result;
}

### Python version

from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    return rescale_to_unit(numbers.as_list())

### C++ version

from std import vector
from std import map
from std import set
from std import string
from std import re
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import re_escape
from std import re_compile
from std import re_search
from std import re_split
from std import re_test
from std import re_unescape
from std import re_match
from std import