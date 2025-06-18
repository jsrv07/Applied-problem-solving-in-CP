def hanoi(n, source, target, auxiliary, moves):
    if n == 1:
        moves.append((source, target))
        return
    hanoi(n-1, source, auxiliary, target, moves)
    moves.append((source, target))
    hanoi(n-1, auxiliary, target, source, moves)

n = int(input())
moves = []
hanoi(n, 1, 3, 2, moves)
print(len(moves))
for move in moves:
    print(move[0], move[1])