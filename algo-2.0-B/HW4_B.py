num_votes = {}

with open('input.txt', 'r') as fin:
    for line in fin:
        candidate, votes = line.split()
        num_votes[candidate] = num_votes.get(candidate, 0) + int(votes)
 
for candidate, votes in sorted(num_votes.items()):
    print(candidate, votes)


