### Python version

from typing import List

def unique_digits(x: List[int]) -> List[int]:
    odd_digit_elements = []
    for i in x:
        if all (int(c) % 2 == 1 for c in str(i)):
            odd_digit_elements.append(i)
    return sorted(odd_digit_elements)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> uniqueDigits(ArrayList<Long> x) {
        ArrayList<Long> oddDigitElements = new ArrayList<>();
        for (long i : x) {
            if (Long.toString(i).chars().allMatch(c -> c % 2 == 1)) {
                oddDigitElements.add(i);
            }
        }
        Collections.sort(oddDigitElements);
        return oddDigitElements;
    }
    

}

