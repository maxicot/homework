class Sieve:
    def __init__(self):
        self.__primes: list[int] = [2]

    # Make the largest prime in the list no less than the provided boundary
    def advance(self, boundary: int) -> None:
        last = self.__primes[-1]
        if boundary > last:
            self.__primes.extend(filter(lambda i: all(map(lambda j: i % j != 0, self.__primes)), range(last, boundary + 1)))

    # Returns the underlying list of primes
    def get_list(self) -> list[int]:
        return self.__primes

# Globals are generally mauvais ton.
# However, here we're using this approach to cache prime calculation results
SIEVE: Sieve = Sieve()

# Get all the primes less than or equal to `n`
def primes_until(n: int) -> list[int]:
    SIEVE.advance(n)
    return SIEVE.get_list()

# Check if a given number is prime
def is_prime(n: int) -> bool:
    return n in primes_until(n)
