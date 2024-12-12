import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long minSubArraySum(ArrayList<Long> nums) {
        long min_sum = Long.MAX_VALUE;
        for (long num : nums) {
            min_sum = min(min_sum, num);
        }
        return min_sum;
    }
    public static void main(String[] args) {
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)4l, (long)1l, (long)2l, (long)4l)))) == (1l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-2l, (long)-3l)))) == (-6l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-2l, (long)-3l, (long)2l, (long)-10l)))) == (-14l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)-9999999999999999l)))) == (-9999999999999999l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)0l, (long)10l, (long)20l, (long)1000000l)))) == (0l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)-1l, (long)-2l, (long)-3l, (long)10l, (long)-5l)))) == (-6l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)100l, (long)-1l, (long)-2l, (long)-3l, (long)10l, (long)-5l)))) == (-6l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)10l, (long)11l, (long)13l, (long)8l, (long)3l, (long)4l)))) == (3l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)100l, (long)-33l, (long)32l, (long)-1l, (long)0l, (long)-2l)))) == (-33l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)-10l)))) == (-10l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)7l)))) == (7l));
    assert(minSubArraySum((new ArrayList<Long>(Arrays.asList((long)1l, (long)-1l)))) == (-1l));
    }

}
