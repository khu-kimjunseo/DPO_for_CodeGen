import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float triangleArea(long a, long b, long c) {
        float s = (a + b + c) / 2.0f;
        float area = (float) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        return a + b <= c || a + c <= b || b + c <= a ? -1 : Math.round(area * 100.0f) / 100.0f;
    }
    

}