#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <list>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int a, b;

int main() {
    cin>>a>>b;
    int sum = 0;
    if(a <= 0 && b >= 0) {
        cout<<"Zero"<<endl;
    }
    else {
        for(int i = a ; i <= b ; i++) {
            if(i < 0) {
                sum++;
            }
        }
        if(sum % 2 != 0 ) {
            cout<<"Negative"<<endl;
        }
        else {
            cout<<"Positive"<<endl;
        }
    }
    return 0;
}
