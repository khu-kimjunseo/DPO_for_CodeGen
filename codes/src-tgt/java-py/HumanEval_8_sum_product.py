### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> sumProduct(ArrayList<Long> numbers) {
        long sum = 0;
        long prod = 1;
        for (long n : numbers) {
            sum += n;
            prod *= n;
        }
        return Pair.with(sum, prod);
    }
    
    

}


### Python version

from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = 0
    prod_value = 1

    for n in numbers:
        sum_value += n
        prod_value *= n
    return sum_value, prod_value
