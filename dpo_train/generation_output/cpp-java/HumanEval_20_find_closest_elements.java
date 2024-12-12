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
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(float[] numbers) {
        return findClosestElements(Arrays.asList(numbers));
    }
    public static Pair<Float, Float> findClosestElements(List<Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(int[] numbers) {
        return findClosestElements(Arrays.asList(numbers));
    }
    public static Pair<Float, Float> findClosestElements(Set<Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Map<Float, Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance) {
        return findClosestElements(numbers.toArray(), min_distance);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance, float max_distance_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance, float max_distance_squared, float max_distance_squared_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared, max_distance_squared_squared);
    }
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float min_distance, float max_distance, float max_distance_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared);
    }
    public static Pair