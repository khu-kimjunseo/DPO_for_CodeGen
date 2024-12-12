### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> intersperse(ArrayList<Long> numbers, long delimeter) {
        ArrayList<Long> result = new ArrayList<Long>();

        if (numbers.size() == 0) {
            return result;
        }

        for (int i = 0; i < numbers.size() - 1; i++) {
            result.add(numbers.get(i));
            result.add(delimeter);
        }

        result.add(numbers.get(numbers.size() - 1));

        return result;
    }
    

}


### Python version

from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if not numbers:
        return []

    result = []

    for n in numbers[:-1]:
        result.append(n)
        result.append(delimeter)

    result.append(numbers[-1])

    return result
