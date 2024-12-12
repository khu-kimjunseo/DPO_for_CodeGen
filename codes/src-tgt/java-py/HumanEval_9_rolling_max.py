### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> rollingMax(ArrayList<Long> numbers) {
        long running_max = Long.MIN_VALUE;
        ArrayList<Long> result = new ArrayList<Long>();

        for (long n : numbers) {
            running_max = Math.max(running_max, n);
            result.add(running_max);
        }

        return result;
    }
    

}


### Python version

from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    running_max = None
    result = []

    for n in numbers:
        if running_max is None:
            running_max = n
        else:
            running_max = max(running_max, n)

        result.append(running_max)

    return result
