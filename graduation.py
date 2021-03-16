from collections import defaultdict

N, M, K = tuple(map(int, input().split()))

columns = [set() for _ in range(M)]
for _ in range(N):
    for colNum, student in enumerate(input()):
        columns[colNum].add(student)

sameColour = defaultdict(set)
for col in columns:
    for student in col:
        sameColour[student] |= col

result = set()
for same in sameColour.values():
    result.add(frozenset(same))
print(len(result))
