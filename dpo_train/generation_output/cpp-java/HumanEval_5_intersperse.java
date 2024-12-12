### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> intersperse(std::vector<long> numbers, long delimeter) {
    if (numbers.empty()) {
        return {};
    }

    std::vector<long> result;

    for (auto n = numbers.begin(); n != numbers.end() - 1; ++n) {
        result.push_back(*n);
        result.push_back(delimeter);
    }

    result.push_back(numbers.back());

    return result;
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
    public static ArrayList<Long> intersperse(ArrayList<Long> numbers, long delimeter) {
        ArrayList<Long> result = new ArrayList<>();
        for (long n : numbers) {
            result.add(n);
            result.add(delimeter);
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution2 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution3 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution4 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution5 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution6 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution7 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(numbers, 3);
        for (long n : intersperse) {
            System.out.println(n);
        }
    }
}

class Solution8 {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] intersperse = intersperse(n