### Python version

from typing import List

def compare(game: List[int],guess: List[int]) -> List[int]:
    return [abs(x-y) for x,y in zip(game,guess)]

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> compare(ArrayList<Long> game, ArrayList<Long> guess) {
        ArrayList<Long> result = new ArrayList<>();
        for (int i = 0; i < game.size(); i++) {
            result.add(compare(game.get(i),guess.get(i)));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> game = new ArrayList<>();
        ArrayList<Long> guess = new ArrayList<>();
        Solution.compare(game,guess);
    }
}
