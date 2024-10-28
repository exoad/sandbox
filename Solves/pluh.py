# not mine
n = int(input())
a = [[] for i in range(26)]
b = [0 for i in range(26)]
ans = True
for i in range(n):
	t = input()
	if i > 0:
		ans = ans and s[:len(t)] != t
		if not ans: break
		if t[:len(s)] != s:
			x, y = next(filter(lambda x: x[0] != x[1], zip(s, t)))
			a[ord(x)-97].append(ord(y)-97)
			b[ord(y)-97] += 1
	s = t
if ans:
	ans = []
	q = []
	l = 0
	for i in range(26):
		if not b[i]:
			q.append(i)
	while l < len(q):
		x = q[l]
		ans.append(chr(x+97))
		l += 1
		for y in a[x]:
			b[y] -= 1
			if not b[y]:
				q.append(y)
if ans and len(ans) == 26:
	print(''.join(ans))
else:
	print('Impossible')
