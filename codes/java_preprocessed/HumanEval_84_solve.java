import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String solve(long N) {
        return Long.toBinaryString(Long.toString(N).chars().map(c -> c - '0').sum());
    }
    

}
