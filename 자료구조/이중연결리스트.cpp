// 이중 연결 리스트
#include <bits/stdc++.h>
using namespace std; 
int main(){
     list<int> a; 
     for(int i = 0; i < 10; i++)a.push_back(i); // 뒤에서부터 요소를 넣는다
     for(int i = 0; i < 10; i++)a.push_front(i); // 앞에서부터 요소를 넣는다
     auto it = a.begin(); it++;
     a.insert(it, 1000); // 중간에 요소를 넣는다.
     for(auto it : a) cout << it << " ";
     cout << '\n';
     a.pop_front();
     a.pop_back();
     for(auto it : a) cout << it << " ";
     cout << '\n';  
    return 0;
}
/* 
9 1000 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8 9
1000 8 7 6 5 4 3 2 1 0 0 1 2 3 4 5 6 7 8
*/
