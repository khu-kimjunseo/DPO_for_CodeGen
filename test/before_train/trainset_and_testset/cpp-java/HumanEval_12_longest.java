import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> longest(ArrayList<String> strings) {
        if (strings.size() == 0) {
            return std::nullopt;
        }
        auto max = strings.get(0);
        for (int i = 1; i < strings.size(); i++) {
            if (strings.get(i).length() > max.length()) {
                max = strings.get(i);
            }
        }
        return std::optional<String>(max);
    }
    
    public static void main(String[] args) {
    assert(longest((new ArrayList<String>(Arrays.asList()))).equals(Optional.empty()));
    assert(longest((new ArrayList<String>(Arrays.asList((String)"x", (String)"y", (String)"z")))).equals(Optional.of("x")));
    assert(longest((new ArrayList<String>(Arrays.asList((String)"x", (String)"yyy", (String)"zzzz", (String)"www", (String)"kkkk", (String)"abc")))).equals(Optional.of("zzzz")));
    }

}
