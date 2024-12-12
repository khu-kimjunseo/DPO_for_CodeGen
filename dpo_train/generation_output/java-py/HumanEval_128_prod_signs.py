### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Python version

from typing import List, Optional

def prod_signs(arr: List[int]) -> Optional[int]:
    return Optional.of(arr.stream().map(x -> x * x).reduce(0, Long::sum));

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }
}

### Java version

import java.util.stream.LongStream;

class Problem {
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.isEmpty()) return Optional.empty();
        long prod = arr.contains(0L) ? 0L : (long) Math.pow(-1, arr.stream().filter(x -> x < 0).count());
        return Optional.of(prod * arr.stream().map(Math::abs).reduce(0L, Long::sum));
    }