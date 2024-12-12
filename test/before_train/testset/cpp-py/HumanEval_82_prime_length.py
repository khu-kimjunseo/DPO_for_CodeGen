def prime_length(string: str) -> bool:
    if (string == "") {
        return false;
    }
    if (string == "1") {
        return true;
    }
    if (string == "2") {
        return prime_length(string.substr(0, 1)) && prime_length(string.substr(1, 1));
    }
    if (string == "3") {
        return prime_length(string.substr(0, 2)) && prime_length(string.substr(2, 2));
    }
    if (string == "4") {
        return prime_length(string.substr(0, 3)) && prime_length(string.substr(3, 3));
    }
    if (string == "5") {
        return prime_length(string.substr(0, 4)) && prime_length(string.substr(4, 4));
    }
    if (string == "6") {
        return prime_length(string.substr(0, 5)) && prime_length(string.substr(5, 5));
    }
    if (string == "7") {
        return prime_length(string.substr(0, 6)) && prime_length(string.substr(6, 6));
    }
    if (string == "8") {
        return prime_length(string.substr(0, 7)) && prime_length(string.substr(7, 7));
    }
    if (string == "9") {
        return prime_length(string.substr(0, 8)) && prime_length(string.substr(8, 8));
    }
    return false;

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
