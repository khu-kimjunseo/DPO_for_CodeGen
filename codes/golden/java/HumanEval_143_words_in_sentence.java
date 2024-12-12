import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String wordsInSentence(String sentence) {
        List<String> newLst = new ArrayList<>();
        for (String word : sentence.split(" ")) {
            int flg = 0;
            if (word.length() == 1) {
                flg = 1;
            }
            for (int i = 2; i < word.length(); i++) {
                if (word.length() % i == 0) {
                    flg = 1;
                }
            }
            if (flg == 0 || word.length() == 2) {
                newLst.add(word);
            }
        }
        return String.join(" ", newLst);
    }
    public static void main(String[] args) {
    assert(wordsInSentence(("This is a test")).equals(("is")));
    assert(wordsInSentence(("lets go for swimming")).equals(("go for")));
    assert(wordsInSentence(("there is no place available here")).equals(("there is no place")));
    assert(wordsInSentence(("Hi I am Hussein")).equals(("Hi am Hussein")));
    assert(wordsInSentence(("go for it")).equals(("go for it")));
    assert(wordsInSentence(("here")).equals(("")));
    assert(wordsInSentence(("here is")).equals(("is")));
    }

}
