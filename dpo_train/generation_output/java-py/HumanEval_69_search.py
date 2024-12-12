### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long search(ArrayList<Long> lst) {
        long[] frq = new long[Collections.max(lst).intValue() + 1];
        lst.stream().forEach(i -> frq[i.intValue()]++);

        long ans = -1;
        for (int i = 1; i < frq.length; i++) {
            if (frq[i] >= i) {
                ans = i;
            }
        }

        return ans;
    }
}

### Python version

from typing import List

def search(lst: List[int]) -> int:
    ans = 0;
    for i in lst:
        ans += i
    return ans

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length];
        IntStream.range(0, nums.length).forEach(i -> res[i] = search(nums));
        return res[nums.length - 1];
    }
}

### Java version

import java.util.stream.IntStream;

class Solution {
    public int search(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int[] res = new int[nums.length