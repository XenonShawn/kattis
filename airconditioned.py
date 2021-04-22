N = int(input())
inp = list()

for _ in range(N):
    inp.append(tuple(map(int, input().split())))
inp.sort(key=lambda x:(x[1], x[0]))

numRooms = 0
highestTemp = 0
for temp in inp:
    if temp[0] > highestTemp:
        numRooms += 1
        highestTemp = temp[1]

print(numRooms)