### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> by_length(std::vector<long> arr) {
    std::map<long, std::string> dic = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };
    std::sort(arr.begin(), arr.end(), std::greater<long>());
    std::vector<std::string> new_arr;
    for (auto var: arr) {
        if (dic.count(var)) {
            new_arr.push_back(dic[var]);
        }
    }
    return new_arr;
}

### Python version

from typing import List

def by_length(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_2(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_3(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_4(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_5(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_6(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_7(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_8(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_9(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_10(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_11(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_12(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_13(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_14(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_15(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_16(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_17(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_18(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_19(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_20(arr: List[int]) -> List[str]:
    return [str(i) for i in arr]

def by_length_python_21(arr: List[int]) -> List[str]:
    return [