import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String encode(String message) {
        return encode(message, "UTF-8");
    }

    public static String encode(String message, String encoding) {
        try {
            return new String(Base64.encodeBase64(message.getBytes(encoding)), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static String decode(String message) {
        return new String(Base64.decodeBase64(message), "UTF-8");
    }

    public static String decode(String message, String encoding) {
        try {
            return new String(Base64.decodeBase64(message.getBytes(encoding)), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static String encode(List<String> messages) {
        return encode(messages, "UTF-8");
    }

    public static String encode(List<String> messages, String encoding) {
        try {
            return new String(Base64.encodeBase64(messages.stream().mapToObj(String::getBytes).toArray(byte[][]::new)), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static List<String> decode(String message) {
        return decode(message, "UTF-8");
    }

    public static List<String> decode(String message, String encoding) {
        try {
            return new ArrayList<>(Arrays.asList(Base64.decodeBase64(message.getBytes(encoding))));
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static List<String> decode(List<String> messages) {
        return decode(messages, "UTF-8");
    }

    public static List<String> decode(List<String> messages, String encoding) {
        try {
            return new ArrayList<>(messages.stream().map(String::getBytes).toArray(byte[][]::new));
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static List<String> encode(List<String> messages) {
        return encode(messages, "UTF-8");
    }

    public static List<String> encode(List<String> messages, String encoding) {
        try {
            return messages.stream().map(String::getBytes).toArray(byte[][]::new);
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static List<String> decode(List<String> messages) {
        return messages.stream().map(String::getBytes).toArray(byte[][]::new);
    }

    public static List<String> decode(List<String> messages, String encoding) {
        try {
            return messages.stream().map(String::getBytes).toArray(byte[][]::new);
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
    }

    public static List<String> encode(List<String> messages) {
        return messages.stream().map(String::getBytes).toArray(byte[][]::new);
    }

    public static List<String> encode(List<String> messages, String encoding) {
        try {
            return messages.stream().map(String::getBytes).toArray(byte[]
    public static void main(String[] args) {
    assert(encode(("TEST")).equals(("tgst")));
    assert(encode(("Mudasir")).equals(("mWDCSKR")));
    assert(encode(("YES")).equals(("ygs")));
    assert(encode(("This is a message")).equals(("tHKS KS C MGSSCGG")));
    assert(encode(("I DoNt KnOw WhAt tO WrItE")).equals(("k dQnT kNqW wHcT Tq wRkTg")));
    }

}
