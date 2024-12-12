import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> parseNestedParens(String paren_string) {
        ArrayList<Long> res = new ArrayList<>();
        String[] parens = paren_string.split("\\(");
        for (String p : parens) {
            long depth = 0, max_depth = 0;
            String[] parens = p.split("\\)");
            for (String p1 : parens) {
                if (p1.equals("(")) {
                    depth++;
                } else if (p1.equals(")")) {
                    depth--;
                } else if (p1.equals("(")) {
                    max_depth = std::max(depth, max_depth);
                } else if (p1.equals(")")) {
                    max_depth = std::max(depth, max_depth);
                }
            }
            res.add(max_depth);
        }
        return res;
    }
    public static void main(String[] args) {
    assert(parseNestedParens(("(()()) ((())) () ((())()())")).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)3l, (long)1l, (long)3l)))));
    assert(parseNestedParens(("() (()) ((())) (((())))")).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)2l, (long)3l, (long)4l)))));
    assert(parseNestedParens(("(()(())((())))")).equals((new ArrayList<Long>(Arrays.asList((long)4l)))));
    }

}
