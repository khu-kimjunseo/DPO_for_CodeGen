### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> pluck(ArrayList<Long> arr) {
        if (arr.size() == 0) return new ArrayList<Long>();
        List<Long> evens = arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());
        if (evens.size() == 0) return new ArrayList<Long>();
        long min = Collections.min(evens);
        return new ArrayList<Long>(Arrays.asList(min, (long) arr.indexOf(min)));
    }
}

### Python version

from typing import List

def pluck(arr: List[int]) -> List[int]:
    return arr.stream().filter(x -> x % 2 == 0).collect(Collectors.toList());

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
    }
}

### Java version

import java.util.stream.Collectors;

class Solution {
    public static List<Integer> pluck(List<Integer> arr) {
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            result.add(arr.get(i));
        }
        return result;
