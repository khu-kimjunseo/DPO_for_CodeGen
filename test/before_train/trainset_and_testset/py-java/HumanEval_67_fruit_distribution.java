import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long fruitDistribution(String s, long n) {
        List<Long> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(fruit_distribution(s, i));
        }
        return list.stream().reduce(0L, (x, y) -> x + y);
    }
    public static void main(String[] args) {
    assert(fruitDistribution(("5 apples and 6 oranges"), (19l)) == (8l));
    assert(fruitDistribution(("5 apples and 6 oranges"), (21l)) == (10l));
    assert(fruitDistribution(("0 apples and 1 oranges"), (3l)) == (2l));
    assert(fruitDistribution(("1 apples and 0 oranges"), (3l)) == (2l));
    assert(fruitDistribution(("2 apples and 3 oranges"), (100l)) == (95l));
    assert(fruitDistribution(("2 apples and 3 oranges"), (5l)) == (0l));
    assert(fruitDistribution(("1 apples and 100 oranges"), (120l)) == (19l));
    }

}
