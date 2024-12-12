import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String matchParens(ArrayList<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(ArrayList<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(List<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(List<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(Tuple<String, String> lst) {
        return matchParens(lst.getTuple());
    }

    public static String matchParens(Tuple<String, String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.getTuple().get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(Tuple<String, String> lst) {
        return matchParens(lst.getTuple());
    }

    public static String matchParens(Tuple<String, String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.getTuple().get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(ArrayList<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(ArrayList<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.append(lst.get(i));
            if (i < lst.size() - 1) {
                sb.append(' ');
            }
        }
        return sb.toString();
    }

    public static String matchParens(List<String> lst) {
        return matchParens(lst, 0);
    }

    public static String matchParens(List<String> lst, int start) {
        StringBuilder sb = new StringBuilder();
        for (int i = start; i < lst.size(); i++) {
            sb.
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
