### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> value_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };
    std::vector<std::string> nums;
    std::stringstream ss(numbers);
    std::string num;
    while (ss >> num) {
        nums.push_back(num);
    }
    std::sort(nums.begin(), nums.end(), [&](std::string a, std::string b) {
        return value_map[a] < value_map[b];
    });
    std::string res;
    for (auto& num : nums) {
        res += num + " ";
    }
    res.pop_back();
    return res;
}


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String sortNumbers(String numbers) {
        Map<String, Integer> valueMap = new HashMap<String, Integer>() {{
            put("zero", 0);
            put("one", 1);
            put("two", 2);
            put("three", 3);
            put("four", 4);
            put("five", 5);
            put("six", 6);
            put("seven", 7);
            put("eight", 8);
            put("nine", 9);
        }};
        return String.join(" ", Arrays.stream(numbers.split(" ")).filter(x -> !x.isEmpty()).sorted((x, y) -> valueMap.get(x) - valueMap.get(y)).toArray(String[]::new));
    }
    

}

