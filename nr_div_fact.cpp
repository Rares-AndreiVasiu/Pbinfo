#include <bits/stdc++.h>
#include <gmpxx.h>
using namespace std;
#define MAXN 100005
#define ll long long

vector<int> primes;
bool is_prime[MAXN];
int cnt[MAXN];

void sieve(int n) {
    memset(is_prime, true, sizeof is_prime);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

void factorize(int n) {
    for (int i = 0; i < primes.size() && primes[i] <= n; i++) {
        int x = primes[i];
        while (n >= x) {
            cnt[x]++;
            n /= x;
        }
    }
}

int main() {
    int n;
    cin >> n;
    sieve(n);
    for (int i = 1; i <= n; i++)
        factorize(i);

    mpz_class ans = 1;

    for(int i = 0; i < primes.size(); ++ i)
    {
        ans *= (cnt[primes[i]] + 1);
    }

    cout << ans; 
   
    return 0;
}
