### Python version

from typing import List

def sort_array(arr: List[int]) -> List[int]:
    return sorted(sorted(arr), key=lambda x: bin(x)[2:].count('1'))

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortArray(ArrayList<Long> arr) {
        return sortArray(arr, 0, arr.size());
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i++) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3, int step4) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step4) {
            result.add(arr.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> arr, int start, int end, int step, int step2, int step3, int step4, int step5) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < end; i += step) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step2) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step3) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step4) {
            result.add(arr.get(i));
        }
        for (int i = start; i < end; i += step5) {
            result.add