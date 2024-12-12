### Python version

from typing import List

def sort_array(array: List[int]) -> List[int]:
    return [] if len(array) == 0 else sorted(array, reverse= (array[0]+array[-1]) % 2 == 0)

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
        return sortArray(array, 0, array.size());
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i++) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i++) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step2) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2, int step3) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step2) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step3) {
            result.add(array.get(i));
        }
        return result;
    }

    public static ArrayList<Long> sortArray(ArrayList<Long> array, int start, int end, int step, int step2, int step3, int step4) {
        if (start > end) {
            return array;
        }
        int mid = (start + end) / 2;
        ArrayList<Long> result = new ArrayList<>();
        for (int i = start; i < mid; i += step) {
            result.add(array.get(i));
        }
        for (int i = mid + 1; i < end; i += step) {
            result.add(array.get