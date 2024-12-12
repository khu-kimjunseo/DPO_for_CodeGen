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
std::vector<long> sort_array(std::vector<long> array) {
    if (array.empty()) {
        return std::vector<long>();
    } else {
        bool isReversed = (array[0] + array[array.size() - 1]) % 2 == 0;
        std::sort(array.begin(), array.end(), [&](long a, long b) {
            return isReversed ? a > b : a < b;
        });
        return array;
    }
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
    public static ArrayList<Long> sortArray(ArrayList<Long> array) {
        if (array.size() == 0) {
            return new ArrayList<Long>();
        } else {
            boolean reverse = (array.get(0) + array.get(array.size() - 1)) % 2 == 0;
            Collections.sort(array);
            if (reverse) {
                Collections.reverse(array);
            }
            return array;
        }
    }
    

}

