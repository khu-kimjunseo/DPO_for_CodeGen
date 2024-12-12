import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> separateParenGroups(String paren_string) {
        ArrayList<String> result = new ArrayList<String>();
        ArrayList<Character> current_string = new ArrayList<Character>();
        int current_depth = 0;

        for (int i = 0; i < paren_string.length(); i++) {
            char c = paren_string.charAt(i);
            if (c == '(') {
                current_depth += 1;
                current_string.add(c);
            } else if (c == ')') {
                current_depth -= 1;
                current_string.add(c);

                if (current_depth == 0) {
                    StringBuilder sb = new StringBuilder(current_string.size());
                    for (Character ch : current_string) {
                        sb.append(ch);
                    }
                    result.add(sb.toString());
                    current_string.clear();
                }
            }
        }

        return result;
    }
    public static void main(String[] args) {
    assert(separateParenGroups(("(()()) ((())) () ((())()())")).equals((new ArrayList<String>(Arrays.asList((String)"(()())", (String)"((()))", (String)"()", (String)"((())()())")))));
    assert(separateParenGroups(("() (()) ((())) (((())))")).equals((new ArrayList<String>(Arrays.asList((String)"()", (String)"(())", (String)"((()))", (String)"(((())))")))));
    assert(separateParenGroups(("(()(())((())))")).equals((new ArrayList<String>(Arrays.asList((String)"(()(())((())))")))));
    assert(separateParenGroups(("( ) (( )) (( )( ))")).equals((new ArrayList<String>(Arrays.asList((String)"()", (String)"(())", (String)"(()())")))));
    }

}
