import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        ArrayList<String> res = new ArrayList<>();
        for (auto x: strings) {
            if (x.find(prefix) == 0) {
                res.add(x);
            }
        }
        return res;
    }
    public static void main(String[] args) {
    assert(filterByPrefix((new ArrayList<String>(Arrays.asList())), ("john")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(filterByPrefix((new ArrayList<String>(Arrays.asList((String)"xxx", (String)"asd", (String)"xxy", (String)"john doe", (String)"xxxAAA", (String)"xxx"))), ("xxx")).equals((new ArrayList<String>(Arrays.asList((String)"xxx", (String)"xxxAAA", (String)"xxx")))));
    }

}
