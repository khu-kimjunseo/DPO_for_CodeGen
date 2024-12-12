def anti_shuffle(s: str) -> str:
    return ' '.join([''.join(sorted(list(i))) for i in s.split(' ')])