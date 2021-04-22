from functools import lru_cache

T = int(input())

for _ in range(T):
    S = int(input())
    paths = dict()
    goodEndings = set()

    for _ in range(S):
        row = input().split()
        if len(row) == 2 and row[1] == 'favourably':
            goodEndings.add(row[0])
        elif len(row) == 4:
            paths[row[0]] = row[1], row[2], row[3]

    @lru_cache(None)
    def recurse(page):
        if page in paths:
            return sum(recurse(x) for x in paths[page])
        return int(page in goodEndings)

    print(recurse('1'))