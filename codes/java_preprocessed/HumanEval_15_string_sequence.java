import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String stringSequence(long n) {
        return LongStream.rangeClosed(0, n).mapToObj(Long::toString).collect(Collectors.joining(" "));
    }
    

}