#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    for(int i = 0; i < 10; i++)q.push(i); // c++에서 enqueue()는 push()로 구현
    while(q.size()){
        cout << q.front() << " ";  
        q.pop(); // c++에서 dequeue()는 pop()으로 구현
    }  
    return 0;
}
/* 
0 1 2 3 4 5 6 7 8 9
*/
