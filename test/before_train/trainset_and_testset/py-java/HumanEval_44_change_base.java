import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String changeBase(long x, long base) {
        return String.format("%d", x % base);
    }
    public static void main(String[] args) {
    assert(changeBase((8l), (3l)).equals(("22")));
    assert(changeBase((9l), (3l)).equals(("100")));
    assert(changeBase((234l), (2l)).equals(("11101010")));
    assert(changeBase((16l), (2l)).equals(("10000")));
    assert(changeBase((8l), (2l)).equals(("1000")));
    assert(changeBase((7l), (2l)).equals(("111")));
    assert(changeBase((2l), (3l)).equals(("2")));
    assert(changeBase((3l), (4l)).equals(("3")));
    assert(changeBase((4l), (5l)).equals(("4")));
    assert(changeBase((5l), (6l)).equals(("5")));
    assert(changeBase((6l), (7l)).equals(("6")));
    assert(changeBase((7l), (8l)).equals(("7")));
    }

}