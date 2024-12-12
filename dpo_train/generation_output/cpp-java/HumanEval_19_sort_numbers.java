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
        return sort_numbers(numbers);
    }
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution2 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution3 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution4 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution5 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution6 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution7 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution8 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution9 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution10 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution11 {
    public static void main(String[] args) {
        String numbers = "123456789";
        System.out.println(Problem.sortNumbers(numbers));
    }
}

class Solution12 {
    public static void main(String[] args) {
        String numbers = "123456789";