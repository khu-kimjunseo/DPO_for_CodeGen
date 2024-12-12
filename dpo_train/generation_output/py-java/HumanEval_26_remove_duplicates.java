### Python version

from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    import collections
    c = collections.Counter(numbers)
    return [n for n in numbers if c[n] <= 1]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> removeDuplicates(ArrayList<Long> numbers) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = 0; i < numbers.size(); i++) {
            if (numbers.get(i) == numbers.get(i)) {
                result.add(numbers.get(i));
            }
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        // TODO Auto-generated method stub
        ArrayList<Long> numbers = new Problem().removeDuplicates(new ArrayList<Long>());
        System.out.println(numbers);
    }
}
