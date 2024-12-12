import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> wordsString(String s) {
        ArrayList<String> words = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isLetter(c)) {
                words.add(c);
            }
        }
        return words;
    }
    public static void main(String[] args) {
    assert(wordsString(("Hi, my name is John")).equals((new ArrayList<String>(Arrays.asList((String)"Hi", (String)"my", (String)"name", (String)"is", (String)"John")))));
    assert(wordsString(("One, two, three, four, five, six")).equals((new ArrayList<String>(Arrays.asList((String)"One", (String)"two", (String)"three", (String)"four", (String)"five", (String)"six")))));
    assert(wordsString(("Hi, my name")).equals((new ArrayList<String>(Arrays.asList((String)"Hi", (String)"my", (String)"name")))));
    assert(wordsString(("One,, two, three, four, five, six,")).equals((new ArrayList<String>(Arrays.asList((String)"One", (String)"two", (String)"three", (String)"four", (String)"five", (String)"six")))));
    assert(wordsString(("")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(wordsString(("ahmed     , gamal")).equals((new ArrayList<String>(Arrays.asList((String)"ahmed", (String)"gamal")))));
    }

}
