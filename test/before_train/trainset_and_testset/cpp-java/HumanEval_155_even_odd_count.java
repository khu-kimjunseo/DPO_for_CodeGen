import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> evenOddCount(long num) {
        long even_count = 0;
        long odd_count = 0;
        for (auto i: std::to_string(abs(num))) {
            if (int(i)%2==0) {
                even_count +=1;
            } else {
                odd_count +=1;
            }
        }
        return std::make_pair(even_count, odd_count);
    }
    public static void main(String[] args) {
    assert(evenOddCount((7l)).equals((Pair.with(0l, 1l))));
    assert(evenOddCount((-78l)).equals((Pair.with(1l, 1l))));
    assert(evenOddCount((3452l)).equals((Pair.with(2l, 2l))));
    assert(evenOddCount((346211l)).equals((Pair.with(3l, 3l))));
    assert(evenOddCount((-345821l)).equals((Pair.with(3l, 3l))));
    assert(evenOddCount((-2l)).equals((Pair.with(1l, 0l))));
    assert(evenOddCount((-45347l)).equals((Pair.with(2l, 3l))));
    assert(evenOddCount((0l)).equals((Pair.with(1l, 0l))));
    }

}
