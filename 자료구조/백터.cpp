#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    for(int i = 1; i <= 10; i++)v.push_back(i); // 뒤부터 요소를 더한다
    for(int a : v) cout << a << " "; // 배열의 요소를 순차적으로 탐색한다. for (int i=0; i< v.size(); i++) count << v[i] << '\n';과 같은 코드다.
    cout << "\n";
    v.pop_back(); // 맨 뒤부터 요소를 지운다.

    for(int a : v) cout << a << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 1); // 요소를 지운다.

    for(int a : v) cout << a << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100); // 요소를 찾는다.
    if(a == v.end()) cout << "not found" << "\n";

    fill(v.begin(), v.end(), 10);
    for(int a : v) cout << a << " ";
    cout << "\n";
    v.clear(); // 배열을 초기화한다.
    for(int a : v) cout << a << " ";
    cout << "\n";

    return 0;
}
/*
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
2 3 4 5 6 7 8 9
not found
10 10 10 10 10 10 10 10
*/
