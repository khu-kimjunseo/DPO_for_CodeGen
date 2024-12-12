### Python version

from typing import List

def order_by_points(nums: List[int]) -> List[int]:
    def digits_sum(n):
        neg = 1
        if n < 0: n, neg = -1 * n, -1 
        n = [int(i) for i in str(n)]
        n[0] = n[0] * neg
        return sum(n)
    return sorted(nums, key=digits_sum)

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> orderByPoints(ArrayList<Long> nums) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = 0; i < nums.size(); i++) {
            result.add(nums.get(i));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        // TODO Auto-generated method stub
        
    }
}
