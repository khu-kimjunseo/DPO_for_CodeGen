### Python version

def digits(n: int) -> int:
    product = 1
    odd_count = 0
    for digit in str(n):
        int_digit = int(digit)
        if int_digit%2 == 1:
            product= product*int_digit
            odd_count+=1
    if odd_count ==0:
        return 0
    else:
        return product

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long digits(long n) {
        long product = 1;
        for (int i = 0; i < n; i++) {
            product = product * n;
        }
        return product;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        long n = Long.parseLong(args[0]);
        long m = Long.parseLong(args[1]);
        long result = Problem.digits(n);
        System.out.println(result);
    }
}
