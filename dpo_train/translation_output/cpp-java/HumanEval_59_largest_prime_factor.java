import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long largestPrimeFactor(long n) {
        long largest=1;
        for(long i=2;i<=n;i++) if(n%i==0 && is_prime(i)) largest=std::max(largest,i);
        return largest;
    }
    public static void main(String[] args) {
    assert(largestPrimeFactor((15l)) == (5l));
    assert(largestPrimeFactor((27l)) == (3l));
    assert(largestPrimeFactor((63l)) == (7l));
    assert(largestPrimeFactor((330l)) == (11l));
    assert(largestPrimeFactor((13195l)) == (29l));
    }

}