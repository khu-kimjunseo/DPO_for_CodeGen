import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long solution(ArrayList<Long> lst) {
        long sum = 0;
        for (int i = 0; i < lst.size(); i++) {
            sum += lst.get(i);
        }
        return sum;
    }
    public static void main(String[] args) {
    assert(solution((new ArrayList<Long>(Arrays.asList((long)5l, (long)8l, (long)7l, (long)1l)))) == (12l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)3l, (long)3l, (long)3l, (long)3l, (long)3l)))) == (9l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)30l, (long)13l, (long)24l, (long)321l)))) == (0l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)5l, (long)9l)))) == (5l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)2l, (long)4l, (long)8l)))) == (0l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)30l, (long)13l, (long)23l, (long)32l)))) == (23l));
    assert(solution((new ArrayList<Long>(Arrays.asList((long)3l, (long)13l, (long)2l, (long)9l)))) == (3l));
    }

}