import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> countUpTo(long n) {
        ArrayList<Long> primes = new ArrayList<>();
        for (long i = 2; i < n; i++) {
            boolean isPrime = true;
            for (long j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.add(i);
            }
        }
        return primes;
    }
    public static void main(String[] args) {
    assert(countUpTo((5l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l)))));
    assert(countUpTo((6l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l)))));
    assert(countUpTo((7l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l)))));
    assert(countUpTo((10l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l, (long)7l)))));
    assert(countUpTo((0l)).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(countUpTo((22l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l, (long)19l)))));
    assert(countUpTo((1l)).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(countUpTo((18l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l)))));
    assert(countUpTo((47l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l, (long)19l, (long)23l, (long)29l, (long)31l, (long)37l, (long)41l, (long)43l)))));
    assert(countUpTo((101l)).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)5l, (long)7l, (long)11l, (long)13l, (long)17l, (long)19l, (long)23l, (long)29l, (long)31l, (long)37l, (long)41l, (long)43l, (long)47l, (long)53l, (long)59l, (long)61l, (long)67l, (long)71l, (long)73l, (long)79l, (long)83l, (long)89l, (long)97l)))));
    }

}