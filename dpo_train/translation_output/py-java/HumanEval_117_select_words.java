import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> selectWords(String s, long n) {
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                result.add(s.substring(0, i));
            }
        }
        return result;
    }
    public static void main(String[] args) {
    assert(selectWords(("Mary had a little lamb"), (4l)).equals((new ArrayList<String>(Arrays.asList((String)"little")))));
    assert(selectWords(("Mary had a little lamb"), (3l)).equals((new ArrayList<String>(Arrays.asList((String)"Mary", (String)"lamb")))));
    assert(selectWords(("simple white space"), (2l)).equals((new ArrayList<String>(Arrays.asList()))));
    assert(selectWords(("Hello world"), (4l)).equals((new ArrayList<String>(Arrays.asList((String)"world")))));
    assert(selectWords(("Uncle sam"), (3l)).equals((new ArrayList<String>(Arrays.asList((String)"Uncle")))));
    assert(selectWords((""), (4l)).equals((new ArrayList<String>(Arrays.asList()))));
    assert(selectWords(("a b c d e f"), (1l)).equals((new ArrayList<String>(Arrays.asList((String)"b", (String)"c", (String)"d", (String)"f")))));
    }

}
