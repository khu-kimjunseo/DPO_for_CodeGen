### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float mean_absolute_deviation(std::vector<float> numbers) {
    float mean = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    float sum = 0;
    for (auto x: numbers) {
        sum += abs(x - mean);
    }
    return sum / numbers.size();
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
    public static float meanAbsoluteDeviation(ArrayList<Float> numbers) {
        float mean = numbers.stream().reduce(0.0f, Float::sum) / numbers.size();
        return numbers.stream().map(x -> Math.abs(x - mean)).reduce(0.0f, Float::sum) / numbers.size();
    }
    

}

