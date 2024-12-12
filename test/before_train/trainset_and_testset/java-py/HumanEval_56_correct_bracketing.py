def correct_bracketing(brackets: str) -> bool:
    if not brackets:
        return True
    if brackets.isEmpty():
        return True
    if brackets.charAt(0) == '<':
        return correctBracketing(brackets.substring(1))
    return False

def check(candidate):
    assert candidate('<>') == True
    assert candidate('<<><>>') == True
    assert candidate('<><><<><>><>') == True
    assert candidate('<><><<<><><>><>><<><><<>>>') == True
    assert candidate('<<<><>>>>') == False
    assert candidate('><<>') == False
    assert candidate('<') == False
    assert candidate('<<<<') == False
    assert candidate('>') == False
    assert candidate('<<>') == False
    assert candidate('<><><<><>><>><<>') == False
    assert candidate('<><><<><>><>>><>') == False

def test_check():
    check(correct_bracketing)

test_check()
