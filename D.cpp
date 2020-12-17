#include<iostream>
using namespace std;
int main(){
    int n = 0, max = 0, maxi = 0, secmax = 0;
    cin >> n;
    int num;
    int i;
    for (i = 0; i < n;i++){
        cin >> num;
        if(num>max){
            secmax = max;
            max = num;
            maxi = i;
        }else if(num>secmax){
            secmax = num;
        }
    }
    for (int j = 0; j < i;j++){
        if(j==maxi){
            cout << secmax << endl;
        }else{
            cout << max << endl;
        }
    }
    return 0;
}