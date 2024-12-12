### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
    

}


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

