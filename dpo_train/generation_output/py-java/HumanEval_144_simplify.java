### Python version

def simplify(x: str, n: str) -> bool:
    a, b = x.split("/")
    c, d = n.split("/")
    numerator = int(a) * int(c)
    denom = int(b) * int(d)
    if (numerator/denom == int(numerator/denom)):
        return True
    return False

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean simplify(String x, String n) {
        return simplify(x, n.split("/"));
    }
    public static boolean simplify(String x, List<String> n) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()));
    }
    public static boolean simplify(String x, List<String> n, String n2) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, String n3) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3, String n4) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3, n4);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3, List<String> n4, String n5) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3, n4, n5);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3, List<String> n4, List<String> n5, String n6) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3, n4, n5, n6);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3, List<String> n4, List<String> n5, List<String> n6, String n7) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3, n4, n5, n6, n7);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String> n3, List<String> n4, List<String> n5, List<String> n6, List<String> n7, String n8) {
        return simplify(x, n.stream().map(s -> s.split("/")).collect(Collectors.toList()), n2, n3, n4, n5, n6, n7, n8);
    }
    public static boolean simplify(String x, List<String> n, List<String> n2, List<String>