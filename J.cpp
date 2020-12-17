//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <queue>
//#include <list>
//#include <stack>
//using namespace std;
//
//int main() {
//    long long n, a, b;
//    cin >> n >> a >> b;
//    long long x = n / (2 * a + b);
//    long long ans = 0;
//    if(x == 0){
//        if(n >= a) ans += a;
//        else ans += n;
//        if(n > (a + b)) ans += n - (a + b);
//    }
//    else{
//        ans += x * 2 * a;
//        long long temp = x * (2 * a + b);
//        if(n >= (temp + a)) ans += a;
//        else ans += n - temp;
//        if(n > (a + b + temp)) ans += n - (a + b + temp);
//    }
//    cout << ans;
//    return 0;
//}
