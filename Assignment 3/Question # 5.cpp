#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0, min = 9999, max = 0;
  cout << "Enter 10 numbers\n\n";
  
	for (int i=0; i<10; i++)
  {
		cout << "Enter number " << i+1 << " : ";
		cin >> num;
		
		sum += num;
		if (num > max)
    {
			max = num;
		}
		if (num < min)
    {
			min = num;
		}
	}
	cout << "\nSum = " << sum;
	cout << "\nMax = " << max;
	cout << "\nMin = " << min;
	
	return 0;
}
