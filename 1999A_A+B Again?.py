t = int(input())
test_cases = []
for _ in range(t):
    test_cases.append(int(input()))
for n in test_cases:
    print(sum(map(int, str(n))))