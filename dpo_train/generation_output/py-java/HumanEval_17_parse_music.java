### Python version

from typing import List


def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    return [note_map[x] for x in music_string.split(' ') if x]

### Java version

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
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> music = Problem.parseMusic("C:\\Users\\joe\\Documents\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\C:\\Music\\