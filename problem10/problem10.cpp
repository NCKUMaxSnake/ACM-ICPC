#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
	    return a;
    return gcd(b, a % b);
}

int main()
{
	long int A,B,C;
	long int x = 0,y;
	bool flag = true;
	cin >> A >> B >> C;
	if(C % gcd(A,B) != 0)
		cout << "N" << endl;
	else
	{
		do
		{
			if((C - A * x) % B == 0)
			{
				flag = false;
			}
			else
			{
				x++;
			}
		}while(flag);
		
		y = (C - A * x) / B;
		cout << "Y" << endl;
		cout << x << " " << y << endl;
	}
	return 0;
}
