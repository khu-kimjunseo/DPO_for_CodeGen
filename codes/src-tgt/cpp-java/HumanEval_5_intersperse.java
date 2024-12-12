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
        ArrayList<Long> result = new ArrayList<Long>();

        if (numbers.size() == 0) {
            return result;
        }

        for (int i = 0; i < numbers.size() - 1; i++) {
            result.add(numbers.get(i));
            result.add(delimeter);
        }

        result.add(numbers.get(numbers.size() - 1));

        return result;
    }
    

}

