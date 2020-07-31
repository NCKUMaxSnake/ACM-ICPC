#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	double a = 9.5971712478875240252073420645906;
	int count;
 	int b, area;
	cin >> count;
	for(int i = 0; i < count; i++)
	{
		cin >> b;		
		area = ceil((double)b * a);
		cout << area << endl;
	}
	return 0;
}
