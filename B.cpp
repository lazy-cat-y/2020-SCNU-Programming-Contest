//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <queue>
//#include <list>
//#include <stack>
//using namespace std;
//
//struct Point{
//    int p;
//    char h;
//};
//
//int main() {
//    stack<Point> c;
//    string s;
//    cin >> s;
//    int temp = 0;
//    for(int i = 0; i < s.size(); i++){
//        if(s[i] == 'S'){
//            Point p;
//            p.p = i;
//            p.h = 'S';
//            c.push(p);
//        }
//        if(s[i] == 'T' && !c.empty()){
//            Point p = c.top();
//            if(p.p + 1 == i - temp * 2){
//                s[p.p] = 'X';
//                s[i] = 'X';
//                temp++;
//                c.pop();
//            }
//            cout << s << endl;
//        }
//    }
//    string ans = "";
//    for(int i = 0; i < s.size(); i++){
//        if(s[i] != 'X') ans += s[i];
//    }
//    cout << ans.size();
//    return 0;
//}
