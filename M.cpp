#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long n = 0, k = 0;
    unsigned long long sum=0;
    cin >> n >> k;
    if(k<=0){
        sum = n * n;
    }else{
        for (long long b = k+1; b <= n;b++){
            int p = b - k;
            int q = n % b;
            sum += (n / b) * p + max(q + 1 - k,(long long)0);
        }
    }

    cout << sum;
    return 0;
}