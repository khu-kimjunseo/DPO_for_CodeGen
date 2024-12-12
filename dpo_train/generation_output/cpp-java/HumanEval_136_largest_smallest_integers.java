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
std::tuple<std::optional<long>, std::optional<long>> largest_smallest_integers(std::vector<long> lst) {
    std::optional<long> smallest;
    std::optional<long> largest;
    for (auto i : lst) {
        if (i < 0 && (!smallest || i > *smallest)) {
            smallest = i;
        }
        if (i > 0 && (!largest || i < *largest)) {
            largest = i;
        }
    }
    return std::make_tuple(smallest, largest);
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
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(ArrayList<Long> lst) {
        return largest_smallest_integers(lst.toArray());
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(long[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(int[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(double[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(float[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(char[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(boolean[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(char[][] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(String[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(ArrayList<String> lst) {
        return largest_smallest_integers(lst.toArray());
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(long[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(int[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(double[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(float[] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
    public static Pair<Optional<Long>, Optional<Long>> largestSmallestIntegers(double[][] lst) {
        return largest_smallest_integers(Arrays.asList(lst));
    }
