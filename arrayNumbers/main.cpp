// populates array, takes in a number, outputs number location, compares number
#include <iostream>
using namespace std;

int main()
{
	int Numbers[4][5];
	int largest;
	int number;
	int i, j;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			Numbers[i][j] = (i+1)*(j+1);

	largest = Numbers[0][0];

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (Numbers[i][j] > largest)
				largest = Numbers[i][j];
		}
	}

	cout << "The largest number in the array is: " << largest << endl;
	cout << "Input a number: ";
	cin >> number;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (Numbers[i][j] == number)
			{
				cout << "Your number is at Numbers[" << i << "][" << j << "]" << endl;
				break;
			}
		}

		if (j != 5)
			break;
	}

	if (i == 4)
		cout << "Number does not exist" << endl;

	cout << "The difference between the max value and Numbers[2][3] is: "
		<< (largest - Numbers[2][3]) << endl;

	return 0;
}
