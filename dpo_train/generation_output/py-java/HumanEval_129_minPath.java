### Python version

from typing import List

def minPath(grid: List[List[int]], k: int) -> List[int]:
    n = len(grid)
    val = n * n + 1
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                temp = []
                if i != 0:
                    temp.append(grid[i - 1][j])

                if j != 0:
                    temp.append(grid[i][j - 1])

                if i != n - 1:
                    temp.append(grid[i + 1][j])

                if j != n - 1:
                    temp.append(grid[i][j + 1])

                val = min(temp)

    ans = []
    for i in range(k):
        if i % 2 == 0:
            ans.append(1)
        else:
            ans.append(val)
    return ans

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> minPath(ArrayList<ArrayList<Long>> grid, long k) {
        ArrayList<Long> ans = new ArrayList<>();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.get(i).size(); j++) {
                if (grid.get(i).get(j) == 1) {
                    ans.add(grid.get(i).get(j));
                }
            }
        }
        return ans;
    }
}

class Solution {
    public static void main(String[] args) throws Exception {
        ArrayList<Long> grid = new ArrayList<>();
        grid.add(1);
        grid.add(2);
        grid.add(3);
        grid.add(4);
        grid.add(5);
        grid.add(6);
        grid.add(7);
        grid.add(8);
        grid.add(9);
        grid.add(10);
        grid.add(11);
        grid.add(12);
        grid.add(13);
        grid.add(14);
        grid.add(15);
        grid.add(16);
        grid.add(17);
        grid.add(18);
        grid.add(19);
        grid.add(20);
        grid.add(21);
        grid.add(22);
        grid.add(23);
        grid.add(24);
        grid.add(25);
        grid.add(26);
        grid.add(27);
        grid.add(28);
        grid.add(29);
        grid.add(30);
        grid.add(31);
        grid.add(32);
        grid.add(33);
        grid.add(34);
        grid.add(35);
        grid.add(36);
        grid.add(37);
        grid.add(38);
        grid.add(39);
        grid.add(40);
        grid.add(41);
        grid.add(42);
        grid.add(43);
        grid.add(44);
        grid.add(45);
        grid.add(46);
        grid.add(47);
        grid.add(48);
        grid.add(49);
        grid.add(50);
        grid.add(51);
        grid.add(52);
        grid.add(53);
        grid.add(54);
        grid.add(55);
        grid.add(56);
        grid.add(57);
        grid.add(58);
        grid.add(59);
        grid.add(60);
        grid.add(61);
        grid.add(62);
        grid.add(63);
        grid.add(64);
        grid.add(65);
        grid.add(66);
        grid.add(67);
        grid.add(68);
        grid.add(69);
        grid.add(70);
        