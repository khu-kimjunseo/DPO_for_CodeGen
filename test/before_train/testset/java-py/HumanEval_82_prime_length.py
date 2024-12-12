def prime_length(string: str) -> bool:
    if (string.length() <= 1) {
        return false;
    }
    for (int i = 2; i < string.length(); i++) {
        if (string.charAt(i) == string.charAt(i - 1)) {
            return false;
        }
    }
    return true;

def check(candidate):
    assert candidate('Hello') == True
    assert candidate('abcdcba') == True
    assert candidate('kittens') == True
    assert candidate('orange') == False
    assert candidate('wow') == True
    assert candidate('world') == True
    assert candidate('MadaM') == True
    assert candidate('Wow') == True
    assert candidate('') == False
    assert candidate('HI') == True
    assert candidate('go') == True
    assert candidate('gogo') == False
    assert candidate('aaaaaaaaaaaaaaa') == False
    assert candidate('Madam') == True
    assert candidate('M') == False
    assert candidate('0') == False

def test_check():
    check(prime_length)

test_check()
