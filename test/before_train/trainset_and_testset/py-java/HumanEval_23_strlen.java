import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long strlen(String string) {
        return strlen(string.toCharArray());
    }
    public static void main(String[] args) {
    assert(strlen(("")) == (0l));
    assert(strlen(("x")) == (1l));
    assert(strlen(("asdasnakj")) == (9l));
    }

}
