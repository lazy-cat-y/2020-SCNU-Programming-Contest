//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <queue>
//#include <list>
//#include <stack>
//#include <vector>
//#include <map>
//using namespace std;
//
//map<int, int> m;
//map<int, int>::iterator index;
//int ans = 0;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int in;
//    for (;n--;)
//    {
//        cin >> in;
//        index = m.lower_bound(in);
//        if (index != m.begin())
//        {
//            index--;
//            m[in]++;
//            if (index->second == 1) m.erase(index->first);
//            else m[index->first]--;
//        }
//        else m[in]++;
//    }
//    for (index = m.begin(); index != m.end(); index++)
//        ans += index->second;
//    cout << ans;
//    return 0;
//}