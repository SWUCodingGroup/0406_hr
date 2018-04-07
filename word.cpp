#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char input[1000000];
	int cnt = 0;
	cin.getline(input, 1000000);

	char *ptr = strtok(input, " ");

	while (ptr != NULL)
	{
		cnt++;
		ptr = strtok(NULL, " ");
	}

	cout << cnt << endl;

	return 0;
}