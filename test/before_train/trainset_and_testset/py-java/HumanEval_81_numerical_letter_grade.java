import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> numericalLetterGrade(ArrayList<Float> grades) {
        ArrayList<String> letterGrade = new ArrayList<>();
        for (int i = 0; i < grades.size(); i++) {
            letterGrade.add(numerical_letter_grade(grades.get(i)));
        }
        return letterGrade;
    }
    public static void main(String[] args) {
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)4.0f, (float)3l, (float)1.7f, (float)2l, (float)3.5f)))).equals((new ArrayList<String>(Arrays.asList((String)"A+", (String)"B", (String)"C-", (String)"C", (String)"A-")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)1.2f)))).equals((new ArrayList<String>(Arrays.asList((String)"D+")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.5f)))).equals((new ArrayList<String>(Arrays.asList((String)"D-")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.0f)))).equals((new ArrayList<String>(Arrays.asList((String)"E")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)0.3f, (float)1.5f, (float)2.8f, (float)3.3f)))).equals((new ArrayList<String>(Arrays.asList((String)"D", (String)"D-", (String)"C-", (String)"B", (String)"B+")))));
    assert(numericalLetterGrade((new ArrayList<Float>(Arrays.asList((float)0.0f, (float)0.7f)))).equals((new ArrayList<String>(Arrays.asList((String)"E", (String)"D-")))));
    }

}
