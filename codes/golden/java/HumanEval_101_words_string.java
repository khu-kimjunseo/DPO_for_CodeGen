import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> wordsString(String s) {
        if (s.isEmpty()) {
            return new ArrayList<String>();
        }

        ArrayList<String> sList = new ArrayList<String>();

        for (char c : s.toCharArray()) {
            if (c == ',') {
                sList.add(" ");
            } else {
                sList.add(Character.toString(c));
            }
        }

        String joinedString = String.join("", sList);
        return new ArrayList<String>(Arrays.asList(joinedString.split("\\s+")));
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
