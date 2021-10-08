import random
from tqdm import tqdm


def find_average_maxlen():

    N = 3_000_000
    avg_maxlen = 0

    for i in tqdm(range(N)):
        p1 = random.random()
        p2 = random.random()

        l1 = min(p1, p2)
        l2 = max(p1, p2) - l1
        l3 = 1 - l1 - l2
        maxlen = max(l1, l2, l3)
        avg_maxlen += maxlen

    avg_maxlen /= N
    return avg_maxlen


if __name__ == "__main__":
    print(find_average_maxlen())
