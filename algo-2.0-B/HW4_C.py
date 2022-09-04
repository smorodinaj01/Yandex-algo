# Частотный анализ

wordcnt = {}
fin = open('input.txt', 'r', encoding = 'utf8')
for line in fin:
    words = line.split()
    for word in words:
        wordcnt[word] = wordcnt.get(word, 0) + 1
    
fin.close()
ans = []
for word in wordcnt:
    ans.append((-wordcnt[word], word))
ans.sort()

for wordcnt, word in ans:
    print(word)