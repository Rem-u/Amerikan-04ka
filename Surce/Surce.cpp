#include<iostream>
using namespace std;
void Logo();
int main()
{
	Logo();

	int summ = 0, i;
	cout << "Уровень:";
	cin >> i;
	for (int j = 1; j <= i; j++)
	{
		summ += j;
		cout << "\nУровень " << j << ": " << summ << " повторов.";
	}
	cout << "\n";
	system("pause");
	return 0;
}

void Logo() //To make it work, add to the additional properties of the console /utf-8
{
	system("chcp 65001");
	system("cls");
	cout <<
		"╔══╗╔╗──╔╗╔═══╗╔═══╗╔╗╔╗╔╗╔══╗╔══╗╔╗╔╗\n"
		"║╔╗║║║──║║║╔══╝║╔═╗║║║║║║║║╔═╝║╔╗║║║║║\n"
		"║╚╝║║╚╗╔╝║║╚══╗║╚═╝║║║║║║╚╝║──║╚╝║║╚╝║\n"
		"║╔╗║║╔╗╔╗║║╔══╝║╔══╝║║╔║║╔╗║──║╔╗║║╔╗║\n"
		"║║║║║║╚╝║║║╚══╗║║───║╚╝║║║║╚═╗║║║║║║║║\n"
		"╚╝╚╝╚╝──╚╝╚═══╝╚╝───╚══╝╚╝╚══╝╚╝╚╝╚╝╚╝\n\n"
		"╔══╗╔╗╔╗╔╗╔══╗╔══╗\n"
		"║╔╗║║║║║║║║╔═╝║╔╗║\n"
		"║║║║║╚╝║║╚╝║──║╚╝║\n"
		"║║║║╚═╗║║╔╗║──║╔╗║\n"
		"║╚╝║──║║║║║╚═╗║║║║\n"
		"╚══╝──╚╝╚╝╚══╝╚╝╚╝\n\n";
	system("pause");
	system("cls");

	return;
}
