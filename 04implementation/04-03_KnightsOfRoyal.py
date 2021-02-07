input_data = input()  # 열행 ex) a1
row = input_data[1]
# ord: 문자->아스키코드, 1~8까지이므로 +1 해줌
col = int(ord(input_data[0]))-int(ord('a'))+1

# 나이트 이동 방향 벡터 (행,열): (-2,-1)부터 반시계 방향 순
steps = [(-2, -1), (-1, -2), (1, -2), (2, -1),
         (2, 1), (1, 2), (-1, 2), (-2, 1)]

result = 0
# 8가지 방향으로 이동 가능 여부 확인
for step in steps:
    # 현재 좌표 + 이동 경로
    nr = row+step[0]
    nc = col+step[1]
    # 8*8좌표 안에 o -> 이동 가능
    if nr >= 1 and nr <= 8 and nc >= 1 and nc <= 8:
        result += 1

print(result)
