def words_in_sentence(sentence: str) -> str:
    return Problem.wordsInSentence(sentence).replace(" ", "").replace("-", "").replace(".", "").replace("?", "").replace("!", "").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!", "!").replace("!",
def check(candidate):
    assert candidate('This is a test') == 'is'
    assert candidate('lets go for swimming') == 'go for'
    assert candidate('there is no place available here') == 'there is no place'
    assert candidate('Hi I am Hussein') == 'Hi am Hussein'
    assert candidate('go for it') == 'go for it'
    assert candidate('here') == ''
    assert candidate('here is') == 'is'

def test_check():
    check(words_in_sentence)

test_check()
