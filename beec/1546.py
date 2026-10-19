cts = {
    "1": "Rolien",
    "2": "Naej",
    "3": "Elehcim",
    "4": "Odranoel"
}
n_tc = int(input())


for _ in range(n_tc): 
    n_c = int(input())
    for _ in range(n_c):
        c = input()
        print(cts[c])