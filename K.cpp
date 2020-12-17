#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <list>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int n;//餐厅的数量
struct node {
    string city;
    int grade;
    int num;
}a[101];

bool cmp(node x, node y) {
    if(x.city != y.city) {
        return x.city < y.city;
    }
    else {
        return x.grade > y.grade;
    }
}

int main() {
    cin>>n;
    for(int i = 1 ; i <= n  ; i++) {
        cin>>a[i].city;
        cin>>a[i].grade;
        a[i].num = i;
    }
    sort(a + 1, a + 1 + n , cmp);
    for(int i = 1 ; i <= n ; i++) {
        cout<<a[i].num<<endl;
    }
    return 0;
} 