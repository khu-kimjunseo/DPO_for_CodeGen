### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
bool has_close_elements(std::vector<float> numbers, float threshold) {
    int n = numbers.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                float distance = abs(numbers[i] - numbers[j]);
                if (distance < threshold) {
                    return true;
                }
            }
        }
    }
    return false;
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
    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold) {
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 0; j < numbers.size(); j++) {
                if (i != j) {
                    float distance = Math.abs(numbers.get(i) - numbers.get(j));
                    if (distance < threshold) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    

}

