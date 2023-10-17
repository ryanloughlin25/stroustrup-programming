#include "../std_lib_facilities.h"

/*
int main() {
	STRING s = "Goodbye, cruel world! ";
	cOut << S << '\n';
}
$ g++ -std=c++11 -o try try_p75.cpp
try_p75.cpp: In function ‘int Main()’:
try_p75.cpp:30:2: error: ‘STRING’ was not declared in this scope
  STRING s = "Goodbye, cruel world! ";
  ^~~~~~
try_p75.cpp:30:2: note: suggested alternative: ‘__STRING’
  STRING s = "Goodbye, cruel world! ";
  ^~~~~~
  __STRING
try_p75.cpp:31:2: error: ‘cOut’ was not declared in this scope
  cOut << S << '\n';
  ^~~~
try_p75.cpp:31:2: note: suggested alternative: ‘cbrt’
  cOut << S << '\n';
  ^~~~
  cbrt
try_p75.cpp:31:10: error: ‘S’ was not declared in this scope
  cOut << S << '\n';
          ^
*/

/*
int Main() {
	string s = "Goodbye, cruel world! ";
	cOut << S << '\n';
}
$ g++ -std=c++11 -o try try_p75.cpp
try_p75.cpp: In function ‘int main()’:
try_p75.cpp:4:2: error: ‘STRING’ was not declared in this scope
  STRING s = "Goodbye, cruel world! ";
  ^~~~~~
try_p75.cpp:4:2: note: suggested alternative: ‘__STRING’
  STRING s = "Goodbye, cruel world! ";
  ^~~~~~
  __STRING
try_p75.cpp:5:2: error: ‘cOut’ was not declared in this scope
  cOut << S << '\n';
  ^~~~
try_p75.cpp:5:2: note: suggested alternative: ‘cbrt’
  cOut << S << '\n';
  ^~~~
  cbrt
try_p75.cpp:5:10: error: ‘S’ was not declared in this scope
  cOut << S << '\n';
          ^
*/

/*
int Main() {
	string s = "Goodbye, cruel world! ";
	cout << S << '\n';
}
$ g++ -std=c++11 -o try try_p75.cpp
try_p75.cpp: In function ‘int Main()’:
try_p75.cpp:57:10: error: ‘S’ was not declared in this scope
  cout << S << '\n';
          ^
*/

/*
int Main() {
	string s = "Goodbye, cruel world! ";
	cout << s << '\n';
}
$ g++ -std=c++11 -o try try_p75.cpp
/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
*/

int main() {
	string s = "Goodbye, cruel world! ";
	cout << s << '\n';
}
