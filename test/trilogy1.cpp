
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i*i < n; i++) {   
        if (n % i == 0) return false;
    }
    return true;
}
int solution(vector<vector<int>> arg1) {
   set<int> primes;

    for (int i = 0; i < arg1.size(); i++) {
        int L = arg1[i][0];
        int R = arg1[i][1];

        for (int num = L; num <= R; num++) {
            if (isPrime(num)) {
                primes.insert(num);
            }
        }
    }

    return primes.size();
}







const int MAXN = 1000000;

bool isPrime[MAXN + 1];

void sieve() {
    for (int i = 0; i <= MAXN; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
int solution(vector<vector<int>> arg1) {
    sieve();

    vector<bool> present(MAXN + 1, false);
//     👉 “Create a vector of size MAXN + 1
// 👉 and fill ALL values with false”

    for (int i = 0; i < arg1.size(); i++) {
        int L = arg1[i][0];
        int R = arg1[i][1];

        for (int num = L; num <= R; num++) {
            present[num] = true;
        }
    }

    int count = 0;

    for (int i = 2; i <= MAXN; i++) {
        if (present[i] && isPrime[i]) {
            count++;
        }
    }

    return count;
}
