import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Optional<String> stringToMd5(String text) {
        try {
            return Optional.of(string_to_md5(text));
        } catch (Exception e) {
            return Optional.empty();
        }
    }
    public static void main(String[] args) {
    assert(stringToMd5(("Hello world")).equals(Optional.of("3e25960a79dbc69b674cd4ec67a72c62")));
    assert(stringToMd5(("")).equals(Optional.empty()));
    assert(stringToMd5(("A B C")).equals(Optional.of("0ef78513b0cb8cef12743f5aeb35f888")));
    assert(stringToMd5(("password")).equals(Optional.of("5f4dcc3b5aa765d61d8327deb882cf99")));
    }

}
