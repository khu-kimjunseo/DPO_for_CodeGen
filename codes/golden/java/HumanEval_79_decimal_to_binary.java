import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String decimalToBinary(long decimal) {
        return "db" + Long.toBinaryString(decimal) + "db";
    }
    public static void main(String[] args) {
    assert(decimalToBinary((0l)).equals(("db0db")));
    assert(decimalToBinary((32l)).equals(("db100000db")));
    assert(decimalToBinary((103l)).equals(("db1100111db")));
    assert(decimalToBinary((15l)).equals(("db1111db")));
    }

}
