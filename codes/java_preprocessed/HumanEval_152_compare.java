import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> compare(ArrayList<Long> game, ArrayList<Long> guess) {
        return (ArrayList<Long>) IntStream.range(0, game.size()).mapToObj(i -> Math.abs(game.get(i) - guess.get(i))).collect(Collectors.toList());
    }
    

}
