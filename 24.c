#include <iostream>
#include <string>
using namespace std;
int main ()
{
int x;
bool finished = false;
bool correct_no = false;
cout << "your number please:-" << endl;
cin >> x;
while (!correct_no)
	{
		if (x <= 100000 && x > 0)
		{
		correct_no = true;
		}
			else
			{
			cout << "Pick a 'whole' positive number please between zero and 100000:" << endl;
			cin >> x;	
			}
	}
	 
cin>>"the number to find";
cin>>"the number is";
return 0;
}
}
