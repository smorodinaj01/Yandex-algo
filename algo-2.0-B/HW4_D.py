# Выборы с ГосДуму

parties = []
sumcnt = 0
i = 0

with open('input.txt', 'r') as fin:
    for line in fin:
        words = line.split()
        cnt = int(words[-1])
        party_name = ' '.join(words[:-1])
        parties.append([party_name, cnt, i])
        sumcnt += cnt
        i += 1
f = sumcnt/450
free = 450
for i in range(len(parties)):
    party = parties[i]
    party.append(party[1] // f)
    free -= party[1] // f
    party.append(party[1] % f)
parties.sort(key = lambda x: x[4], reverse = True)
for i in range (int(free)):
    parties[i][3] += 1
parties.sort(key = lambda x: x[2])

for party in parties:
    print(party[0], int(party[3]))
 

