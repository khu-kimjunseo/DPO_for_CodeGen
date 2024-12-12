import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean rightAngleTriangle(long a, long b, long c) {
        return a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b;
    }
    

}
