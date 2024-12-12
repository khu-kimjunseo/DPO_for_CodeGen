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
        HashMap<String, Long> note_map = new HashMap<String, Long>() {{
            put("o", 4L);
            put("o|", 2L);
            put(".|", 1L);
        }};
        return Arrays.stream(music_string.split(" ")).filter(x -> !x.isEmpty()).map(x -> note_map.get(x)).collect(Collectors.toCollection(ArrayList::new));
    }
    
    

}

