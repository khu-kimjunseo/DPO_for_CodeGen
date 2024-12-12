import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> longest(ArrayList<String> strings) {
        if (strings.isEmpty()) {
            return Optional.empty();
        }

        String longest = strings.get(0);
        for (String s : strings) {
            if (s.length() > longest.length()) {
                longest = s;
            }
        }
        return Optional.of(longest);
    }
    public static void main(String[] args) {
    assert(longest((new ArrayList<String>(Arrays.asList()))).equals(Optional.empty()));
    assert(longest((new ArrayList<String>(Arrays.asList((String)"x", (String)"y", (String)"z")))).equals(Optional.of("x")));
    assert(longest((new ArrayList<String>(Arrays.asList((String)"x", (String)"yyy", (String)"zzzz", (String)"www", (String)"kkkk", (String)"abc")))).equals(Optional.of("zzzz")));
    }

}
