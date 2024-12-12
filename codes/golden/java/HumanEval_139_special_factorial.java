import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long specialFactorial(long n) {
        long factI = 1;
        long specialFact = 1;
        for (long i = 1; i <= n; i++) {
            factI *= i;
            specialFact *= factI;
        }
        return specialFact;
    }
    public static void main(String[] args) {
    assert(specialFactorial((4l)) == (288l));
    assert(specialFactorial((5l)) == (34560l));
    assert(specialFactorial((7l)) == (125411328000l));
    assert(specialFactorial((1l)) == (1l));
    }

}
