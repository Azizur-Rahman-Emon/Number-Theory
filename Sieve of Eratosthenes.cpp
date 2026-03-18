vector<int> isPrime ;
vector<int> primeNumbers ;

void sieve_of_eratosthenes(int limit){
    isPrime.assign(limit+5,1) ;
    isPrime[0] = isPrime[1] = 0 ;
    for(int i = 2 ; i <= limit ; i++){
        if(isPrime[i]){
            for(int j = 2*i ; j <= limit ; j += i){
                isPrime[j] = 0 ;
            }
        }
    }
    for(int i = 2 ; i <= limit ; i++){
        if(isPrime[i]) primeNumbers.push_back(i) ;
    }
}
