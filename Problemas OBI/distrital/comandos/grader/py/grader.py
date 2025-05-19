from comandos import longitud_maxima

MAX_N = int(100000)
MAX_K = int(1000000000)

def main():
  # BEGIN SECRET
  input_secret = "EpeYdio3rKcZhPfDK9AxfnZevuepivCn"
  output_secret = "FLGDjq7gdsWfVEZRpj3wwKvifopMEFFM"

  secret = input()

  if secret != input_secret:
    print(output_secret)
    print("PV")
    print("Possible tampering with the input")
    return

  # END SECRET

  N, K = map(int, input().split())

  assert 1 <= N <= MAX_N

  assert 1 <= K <= N

  C = list(map(int, input().split()))

  assert len(C) == N
  for a in range(0, N):
    assert -MAX_K <= C[a]<= MAX_K

  result = longitud_maxima(N, K, C)

  # BEGIN SECRET
  print(output_secret)
  print("OK")
  # END SECRET

  print(result)


if __name__ == "__main__":
  main()
