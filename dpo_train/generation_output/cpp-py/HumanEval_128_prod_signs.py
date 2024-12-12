### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::optional<long> prod_signs(std::vector<long> arr) {
    if (arr.empty()) return std::nullopt;
    long prod = 0;
    auto neg_count = std::count_if(arr.begin(), arr.end(), [](long x){return x < 0;});
    if (std::find(arr.begin(), arr.end(), 0) != arr.end()) prod = 0;
    else prod = pow(-1, neg_count);
    long sum = 0;
    for (auto i : arr) sum += std::abs(i);
    return prod * sum;
}

### Python version

from typing import List, Optional

def prod_signs(arr: List[int]) -> Optional[int]:
    if (arr.empty()) return None
    return prod_signs(arr[0])

### C++ version

#import math
#import std
#import re
#import sys
#import time
#import unittest
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import unittest.mock
#import un