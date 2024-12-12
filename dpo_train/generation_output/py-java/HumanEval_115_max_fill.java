### Python version

import math
from typing import List

def max_fill(grid: List[List[int]], capacity: int) -> int:
    return sum([math.ceil(sum(arr)/capacity) for arr in grid])

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long maxFill(ArrayList<ArrayList<Long>> grid, long capacity) {
        long max = 0;
        for (ArrayList<Long> row : grid) {
            long rowMax = max;
            for (long col : row) {
                if (col > rowMax) {
                    rowMax = col;
                }
            }
            max = Math.max(max, rowMax);
        }
        return max;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<ArrayList<Long>> grid = new ArrayList<>();
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
        grid.add(new ArrayList<>());
