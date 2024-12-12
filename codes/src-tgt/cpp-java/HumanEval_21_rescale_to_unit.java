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


### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Float> rescaleToUnit(ArrayList<Float> numbers) {
        float minNumber = Collections.min(numbers);
        float maxNumber = Collections.max(numbers);
        return numbers.stream().map(x -> (x - minNumber) / (maxNumber - minNumber)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}

