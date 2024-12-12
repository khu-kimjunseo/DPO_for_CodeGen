import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isNested(String string) {
        List<Integer> openingBracketIndex = new ArrayList<>();
        List<Integer> closingBracketIndex = new ArrayList<>();
        for (int i = 0; i < string.length(); i++) {
            if (string.charAt(i) == '[') {
                openingBracketIndex.add(i);
            } else {
                closingBracketIndex.add(i);
            }
        }
        Collections.reverse(closingBracketIndex);
        int cnt = 0;
        int i = 0;
        int l = closingBracketIndex.size();
        for (int idx : openingBracketIndex) {
            if (i < l && idx < closingBracketIndex.get(i)) {
                cnt++;
                i++;
            }
        }
        return cnt >= 2;
    }
    public static void main(String[] args) {
    assert(isNested(("[[]]")) == (true));
    assert(isNested(("[]]]]]]][[[[[]")) == (false));
    assert(isNested(("[][]")) == (false));
    assert(isNested(("[]")) == (false));
    assert(isNested(("[[[[]]]]")) == (true));
    assert(isNested(("[]]]]]]]]]]")) == (false));
    assert(isNested(("[][][[]]")) == (true));
    assert(isNested(("[[]")) == (false));
    assert(isNested(("[]]")) == (false));
    assert(isNested(("[[]][[")) == (true));
    assert(isNested(("[[][]]")) == (true));
    assert(isNested(("")) == (false));
    assert(isNested(("[[[[[[[[")) == (false));
    assert(isNested(("]]]]]]]]")) == (false));
    }

}
