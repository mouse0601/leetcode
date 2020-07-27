class Solution {
public:
    bool isPrime(int num)
    {
        if(num < 2)
            return false;
        for(int i = 2;i  <= sqrt(num);i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        //³¬Ê±
        /*int count = 0;
        for(int i = 2;i < n;i++)
        {
            if(isprime(i))
                count++;
        }
        return count;*/
        if(n < 3)
        return 0;
        int num_primes = 0;
        bool* is_prime_record = new bool[n];
		for(int i=0;i<n;++i) is_prime_record[i] = true;

		for(int i=2; i*i<n; ++i){
			if(isPrime(i)){
				for(int j=i*i; j<n; j+=i){
					is_prime_record[j] = false;
				}
			}
		}
		for(int i=2;i<n;++i){
			if(is_prime_record[i]) num_primes++;
		}

		return num_primes;
    }
};
