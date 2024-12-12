import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return matchParens(lst.toString());
    }
    public static String matchParens(String s) {
        return s.replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8, String p9) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String matchParens(String s, String p, String p2, String p3, String p4, String p5, String p6, String p7, String p8, String p9, String p10) {
        return s.replaceAll(p, "").replaceAll("\\(", "").replaceAll("\\)", "");
    }
    public static String
    public static void main(String[] args) {
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"()(", (String)")")))).equals(("Yes")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)")", (String)")")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"(()(())", (String)"())())")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)")())", (String)"(()()(")))).equals(("Yes")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"(())))", (String)"(()())((")))).equals(("Yes")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"()", (String)"())")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"(()(", (String)"()))()")))).equals(("Yes")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"((((", (String)"((())")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)")(()", (String)"(()(")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)")(", (String)")(")))).equals(("No")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)"(", (String)")")))).equals(("Yes")));
    assert(matchParens((new ArrayList<String>(Arrays.asList((String)")", (String)"(")))).equals(("Yes")));
    }

}
