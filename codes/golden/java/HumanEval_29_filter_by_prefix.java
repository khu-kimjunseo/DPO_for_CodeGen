import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> filterByPrefix(ArrayList<String> strings, String prefix) {
        return (ArrayList<String>)strings.stream().filter(s -> s.startsWith(prefix)).collect(Collectors.toList());
    }
    public static void main(String[] args) {
    assert(filterByPrefix((new ArrayList<String>(Arrays.asList())), ("john")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(filterByPrefix((new ArrayList<String>(Arrays.asList((String)"xxx", (String)"asd", (String)"xxy", (String)"john doe", (String)"xxxAAA", (String)"xxx"))), ("xxx")).equals((new ArrayList<String>(Arrays.asList((String)"xxx", (String)"xxxAAA", (String)"xxx")))));
    }

}
