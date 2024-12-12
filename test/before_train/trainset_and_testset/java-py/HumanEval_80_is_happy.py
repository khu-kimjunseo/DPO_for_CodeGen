def is_happy(s: str) -> bool:
    if (s.length() < 3) return false;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s.charAt(i) == s.charAt(i+1) || s.charAt(i+1) == s.charAt(i+2) || s.charAt(i) == s.charAt(i+2)) return false;
    }
    return true;

def check(candidate):
    assert candidate('a') == False
    assert candidate('aa') == False
    assert candidate('abcd') == True
    assert candidate('aabb') == False
    assert candidate('adb') == True
    assert candidate('xyy') == False
    assert candidate('iopaxpoi') == True
    assert candidate('iopaxioi') == False

def test_check():
    check(is_happy)

test_check()
