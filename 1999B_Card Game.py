def count_wins(a1, a2, b1, b2):
    scenarios = [
        (a1, b1, a2, b2),
        (a1, b2, a2, b1),
        (a2, b1, a1, b2),
        (a2, b2, a1, b1)
    ]
    suneet_wins = 0 
    for s in scenarios:
        suneet_rounds = 0
        slavic_rounds = 0

        if s[0] > s[1]:
            suneet_rounds += 1
        elif s[0] < s[1]:
            slavic_rounds += 1
        if s[2] > s[3]:
            suneet_rounds += 1
        elif s[2] < s[3]:
            slavic_rounds += 1      
        if suneet_rounds > slavic_rounds:
            suneet_wins += 1  
    return suneet_wins
t = int(input())
results = []
for _ in range(t):
    a1, a2, b1, b2 = map(int, input().split())
    results.append(count_wins(a1, a2, b1, b2))
for result in results:
    print(result)
