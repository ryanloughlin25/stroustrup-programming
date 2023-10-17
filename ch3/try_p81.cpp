#include "../std_lib_facilities.h"

int main()
{
	double d = 0;
	while (cin>>d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d
			<< " i==" << i
			<< " i2==" << i2
			<< " char(" << c << ")\n";
	}
	return 0;
}

/*
0
d==0 i==0 i2==0 char()
1
d==1 i==1 i2==1 char()
2
d==2 i==2 i2==2 char()
65
d==65 i==65 i2==65 char(A)
99
d==99 i==99 i2==99 char(c)
128
d==128 i==128 i2==-128 char(�)
1001
d==1001 i==1001 i2==-23 char(�)
999999
d==999999 i==999999 i2==63 char(?)
56
d==56 i==56 i2==56 char(8)
89
d==89 i==89 i2==89 char(Y)
128
d==128 i==128 i2==-128 char(�)
56.9
d==56.9 i==56 i2==56 char(8)
56.2
d==56.2 i==56 i2==56 char(8)
-0
d==-0 i==0 i2==0 char()
-1
d==-1 i==-1 i2==-1 char(�)
-128
d==-128 i==-128 i2==-128 char(�)
-10000
d==-10000 i==-10000 i2==-16 char(�)
-129
d==-129 i==-129 i2==127 char()
-200
d==-200 i==-200 i2==56 char(8)
*/
