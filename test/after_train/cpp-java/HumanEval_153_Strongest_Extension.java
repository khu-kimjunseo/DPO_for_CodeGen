import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String StrongestExtension(String class_name, ArrayList<String> extensions) {
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    public static void main(String[] args) {
    assert(StrongestExtension(("Watashi"), (new ArrayList<String>(Arrays.asList((String)"tEN", (String)"niNE", (String)"eIGHt8OKe")))).equals(("Watashi.eIGHt8OKe")));
    assert(StrongestExtension(("Boku123"), (new ArrayList<String>(Arrays.asList((String)"nani", (String)"NazeDa", (String)"YEs.WeCaNe", (String)"32145tggg")))).equals(("Boku123.YEs.WeCaNe")));
    assert(StrongestExtension(("__YESIMHERE"), (new ArrayList<String>(Arrays.asList((String)"t", (String)"eMptY", (String)"nothing", (String)"zeR00", (String)"NuLl__", (String)"123NoooneB321")))).equals(("__YESIMHERE.NuLl__")));
    assert(StrongestExtension(("K"), (new ArrayList<String>(Arrays.asList((String)"Ta", (String)"TAR", (String)"t234An", (String)"cosSo")))).equals(("K.TAR")));
    assert(StrongestExtension(("__HAHA"), (new ArrayList<String>(Arrays.asList((String)"Tab", (String)"123", (String)"781345", (String)"-_-")))).equals(("__HAHA.123")));
    assert(StrongestExtension(("YameRore"), (new ArrayList<String>(Arrays.asList((String)"HhAas", (String)"okIWILL123", (String)"WorkOut", (String)"Fails", (String)"-_-")))).equals(("YameRore.okIWILL123")));
    assert(StrongestExtension(("finNNalLLly"), (new ArrayList<String>(Arrays.asList((String)"Die", (String)"NowW", (String)"Wow", (String)"WoW")))).equals(("finNNalLLly.WoW")));
    assert(StrongestExtension(("_"), (new ArrayList<String>(Arrays.asList((String)"Bb", (String)"91245")))).equals(("_.Bb")));
    assert(StrongestExtension(("Sp"), (new ArrayList<String>(Arrays.asList((String)"671235", (String)"Bb")))).equals(("Sp.671235")));
    }

}
