import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Long, Long> sumProduct(ArrayList<Long> numbers) {
        long sum_value = 0;
        long prod_value = 1;

        for (long n: numbers) {
            sum_value += n;
            prod_value *= n;
        }
        return std::make_pair(sum_value, prod_value);
    }
    public static void main(String[] args) {
    assert(sumProduct((new ArrayList<Long>(Arrays.asList()))).equals((Pair.with(0l, 1l))));
    assert(sumProduct((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l)))).equals((Pair.with(3l, 1l))));
    assert(sumProduct((new ArrayList<Long>(Arrays.asList((long)100l, (long)0l)))).equals((Pair.with(100l, 0l))));
    assert(sumProduct((new ArrayList<Long>(Arrays.asList((long)3l, (long)5l, (long)7l)))).equals((Pair.with(15l, 105l))));
    assert(sumProduct((new ArrayList<Long>(Arrays.asList((long)10l)))).equals((Pair.with(10l, 10l))));
    }

}
