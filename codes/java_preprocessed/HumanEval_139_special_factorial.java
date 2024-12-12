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
    

}
