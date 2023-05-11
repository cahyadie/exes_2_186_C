#include <iostream>
using namespace std;

int Die[82];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 82))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 82 element.\n\n";

	}
	cout << "\n-----------------\n";
	cout << "Enter arrat elements\n";
	cout << "-------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Die[i];
	}
}

void linearsearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "Enter the element you want to search : ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (Die[i] == item)
			{
				cout << "\n" << item << "Found " << (i + 1) << endl;
				break;
			}
		}if (i == n)
			cout << "\n" << item << "not found\n";
		cout << "\nNumber of comparation : " << ctr << endl;

		cout << "\nContinue search (y/n) : ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}

int main() {
	input();
	linearsearch();
}