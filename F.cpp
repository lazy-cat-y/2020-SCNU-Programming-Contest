#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int x;
    int y;
}point;
int a[2010];
int t;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n >> point.x >> point.y;
    for(int i = 1; i <= n ; i++) {
        for(int j = i + 1;j <= n; j++) {
            t=min(j - i , abs(i - point.x ) + abs(j - point.y) + 1);
            a[t]++;
        }
    }
    for(int i = 1; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
