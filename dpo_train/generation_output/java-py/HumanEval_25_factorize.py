### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> factorize(long n) {
        ArrayList<Long> fact = new ArrayList<>();
        long i = 2;
        while (i <= n) {
            if (n % i == 0) {
                fact.add(i);
                n /= i;
            } else {
                i++;
            }
        }
        return fact;
    }
}

### Python version

from typing import List

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factorize(n: int) -> List[int]:
    fact = []
    while n > 0:
        n, mod = divmod(n, 2)
        fact.append(mod)
    return fact

def divmod(n: int, m: int) -> (int, int):
    if n == 0:
        return 0, m
    if n == 1:
        return 1, m
    return divmod(n, m)

### Java version

import java.util.stream

def factor