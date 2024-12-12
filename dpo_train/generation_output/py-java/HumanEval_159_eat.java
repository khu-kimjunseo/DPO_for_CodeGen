### Python version

from typing import List

def eat(number: int, need: int, remaining: int) -> List[int]:
    if(need <= remaining):
        return [ number + need , remaining-need ]
    else:
        return [ number + remaining , 0]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> eat(long number, long need, long remaining) {
        ArrayList<Long> result = new ArrayList<>();
        for(int i = 0; i < need; i++) {
            result.add(number);
            number += remaining;
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] need = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        long[] remaining = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ArrayList<Long> result = Problem.eat(numbers, need, remaining);
        for(int i = 0; i < result.size(); i++) {
            System.out.println(result.get(i));
        }
    }
}
