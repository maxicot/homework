# Places two strings in a reverse lexicographical order
def cmp(s1: str, s2: str) -> (str, str):
    return (s1, s2) if s1 > s2 else (s2, s1)
