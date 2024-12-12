def is_happy(s: str) -> bool:
    if (s.size() < 3) {
      return false;
    }

    for (int i = 0; i < s.size() - 2; i++) {
      if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]) {
        return false;
      }
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
