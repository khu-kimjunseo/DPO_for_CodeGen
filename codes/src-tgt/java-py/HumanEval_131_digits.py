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
        int oddCount = 0;
        for (char c : Long.toString(n).toCharArray()) {
            int digit = Character.getNumericValue(c);
            if (digit % 2 == 1) {
                product *= digit;
                oddCount++;
            }
        }
        return oddCount == 0 ? 0 : product;
    }
    

}


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
