#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <list>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int num1 , sum1 ;
int n, total;


int main() {
    cin>>sum1>>n;
    for(int i = 0 ; i < n ; i++) {
        cin>>num1;
        total += num1;
    }
    if(sum1 <= total) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}