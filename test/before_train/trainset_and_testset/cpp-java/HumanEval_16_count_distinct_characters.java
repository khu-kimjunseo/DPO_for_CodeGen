import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long countDistinctCharacters(String string) {
        long count = 0;
        for (char c : string) {
            count += count_distinct_characters(string);
        }
        return count;
    }
    public static void main(String[] args) {
    assert(countDistinctCharacters(("")) == (0l));
    assert(countDistinctCharacters(("abcde")) == (5l));
    assert(countDistinctCharacters(("abcdecadeCADE")) == (5l));
    assert(countDistinctCharacters(("aaaaAAAAaaaa")) == (1l));
    assert(countDistinctCharacters(("Jerry jERRY JeRRRY")) == (5l));
    }

}
