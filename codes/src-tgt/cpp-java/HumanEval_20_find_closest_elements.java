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
std::tuple<float, float> find_closest_elements(std::vector<float> numbers) {
    std::tuple<float, float> closest_pair;
    float distance = -1;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i+1; j < numbers.size(); j++) {
            float new_distance = std::abs(numbers[i] - numbers[j]);
            if (distance == -1 || new_distance < distance) {
                distance = new_distance;
                closest_pair = std::make_tuple(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_pair;
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
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers) {
        Pair<Float, Float> closestPair = null;
        Float distance = null;

        for (int idx = 0; idx < numbers.size(); idx++) {
            Float elem = numbers.get(idx);
            for (int idx2 = 0; idx2 < numbers.size(); idx2++) {
                Float elem2 = numbers.get(idx2);
                if (idx != idx2) {
                    Float newDistance = Math.abs(elem - elem2);
                    if (distance == null || newDistance < distance) {
                        distance = newDistance;
                        closestPair = Pair.with(Math.min(elem, elem2), Math.max(elem, elem2));
                    }
                }
            }
        }

        return closestPair;
    }
    

}

