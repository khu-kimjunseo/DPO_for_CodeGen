import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> intersperse(ArrayList<Long> numbers, long delimeter) {
        ArrayList<Long> result = new ArrayList<>();

        for (int i = 0; i < numbers.size(); i++) {
            long n = numbers.get(i);
            long d = delimeter;

            if (n % 2 == 0) {
                d = d - 1;
            }

            result.add(n / d);
        }

        return result;
    }
    public static void main(String[] args) {
    assert(intersperse((new ArrayList<Long>(Arrays.asList())), (7l)).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(intersperse((new ArrayList<Long>(Arrays.asList((long)5l, (long)6l, (long)3l, (long)2l))), (8l)).equals((new ArrayList<Long>(Arrays.asList((long)5l, (long)8l, (long)6l, (long)8l, (long)3l, (long)8l, (long)2l)))));
    assert(intersperse((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l, (long)2l))), (2l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l, (long)2l, (long)2l, (long)2l)))));
    }

}
