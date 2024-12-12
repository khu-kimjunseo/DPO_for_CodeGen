### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> getOddCollatz(long n) {
        ArrayList<Long> oddCollatz = new ArrayList<Long>();
        if (n % 2 == 1) {
            oddCollatz.add(n);
        }
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = n * 3 + 1;
            }
            if (n % 2 == 1) {
                oddCollatz.add(n);
            }
        }
        oddCollatz.sort(null);
        return oddCollatz;
    }
}

### Python version

from typing import List

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = Problem.getOddCollatz(n)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

### Java version

import java.util.stream

def get_odd_collatz(n: int) -> List[int]:
    oddCollatz = []
    for i in range(n):
        oddCollatz.append(i)
    oddCollatz.sort(null)
    return oddCollatz

