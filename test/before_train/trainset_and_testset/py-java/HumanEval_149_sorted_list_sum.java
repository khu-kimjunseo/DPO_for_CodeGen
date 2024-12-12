import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> sortedListSum(ArrayList<String> lst) {
        ArrayList<String> new_lst = new ArrayList<>();
        for (int i = 0; i < lst.size(); i++) {
            new_lst.add(lst.get(i));
        }
        return new_lst;
    }
    public static void main(String[] args) {
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"aa", (String)"a", (String)"aaa")))).equals((new ArrayList<String>(Arrays.asList((String)"aa")))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"school", (String)"AI", (String)"asdf", (String)"b")))).equals((new ArrayList<String>(Arrays.asList((String)"AI", (String)"asdf", (String)"school")))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"d", (String)"b", (String)"c", (String)"a")))).equals((new ArrayList<String>(Arrays.asList()))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"d", (String)"dcba", (String)"abcd", (String)"a")))).equals((new ArrayList<String>(Arrays.asList((String)"abcd", (String)"dcba")))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"AI", (String)"ai", (String)"au")))).equals((new ArrayList<String>(Arrays.asList((String)"AI", (String)"ai", (String)"au")))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"a", (String)"b", (String)"b", (String)"c", (String)"c", (String)"a")))).equals((new ArrayList<String>(Arrays.asList()))));
    assert(sortedListSum((new ArrayList<String>(Arrays.asList((String)"aaaa", (String)"bbbb", (String)"dd", (String)"cc")))).equals((new ArrayList<String>(Arrays.asList((String)"cc", (String)"dd", (String)"aaaa", (String)"bbbb")))));
    }

}
