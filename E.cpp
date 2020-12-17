#include<iostream>
using namespace std;
int main(){
    int n = 0,sum=0;
    cin >> n;
    int arr[20];
    int arrb[20];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        cin >> arrb[i];
    }
    for (int i = 0; i < n;i++){
        if(arr[i]>arrb[i]){
            sum += arr[i] - arrb[i];
        }
    }
    cout << sum;
    return 0;
}