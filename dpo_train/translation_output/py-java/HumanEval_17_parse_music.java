import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> parseMusic(String music_string) {
        ArrayList<Long> result = new ArrayList<>();
        String[] parts = music_string.split(" ");
        for (String part : parts) {
            if (part.length() == 0) {
                continue;
            }
            try {
                result.add(Long.parseLong(part));
            } catch (NumberFormatException e) {
                System.out.println("Problem parsing music: " + part);
            }
        }
        return result;
    }
    public static void main(String[] args) {
    assert(parseMusic(("")).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(parseMusic(("o o o o")).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)4l, (long)4l, (long)4l)))));
    assert(parseMusic((".| .| .| .|")).equals((new ArrayList<Long>(Arrays.asList((long)1l, (long)1l, (long)1l, (long)1l)))));
    assert(parseMusic(("o| o| .| .| o o o o")).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)2l, (long)1l, (long)1l, (long)4l, (long)4l, (long)4l, (long)4l)))));
    assert(parseMusic(("o| .| o| .| o o| o o|")).equals((new ArrayList<Long>(Arrays.asList((long)2l, (long)1l, (long)2l, (long)1l, (long)4l, (long)2l, (long)4l, (long)2l)))));
    }

}