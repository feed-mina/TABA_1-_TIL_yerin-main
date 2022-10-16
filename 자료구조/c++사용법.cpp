#include <bits/stdc++.h> // --- (1) 헤더파일 : STL 라이브러리를 import, 이중 bits/stdc++.h는 모든 표준 라이브러리가 포함된 헤더를 의미
ugsing namespace std;     // --- (2) std라는 네임스페이스를 사용, cin이나 count등을 사용할때 원래는 std::cin처럼 네임스페이스를 달아서 호출해야되는데 이를 기본으로 설정한다는 의미, *네임스페이스는 같은 클래스 이름 구별, 모듈화에 쓰이는 이름을 뜻함
string a;                // --- (3) 문자열을 선언, <타입>,<변수명> 으로 선언 string이라는 타입을 가진 a라는 변수를 정의 , 예를 들어 string a = "민예린" 이라고 할때, a를 lvalue라고 하고 "민예린"을 rvalue라고 한다. lvalue는 추후 다시 사용 할 수 있는 변수이며 rvalue는 한번 쓰고 다시 사용되지 않을 변수이다.
int main()
{
    cin >> a;            // --- (4) 입력을 의미 , 대표적으로 cin 과 scanf가 있다.
    cout << a << "\n";   // --- (5) 출력을 의미, 대표적으로 count와 printf가 있다
    return 0;            // --- (6) 프로세스가 정상적으로 마무리됨을 뜻함
} 
