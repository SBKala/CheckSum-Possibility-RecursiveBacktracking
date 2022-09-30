#include <iostream>

using namespace std;

int CheckSumPossibility(int num, int arr[], int size)
{
if (num == 0)
    return true;
if (size == 0)
    return false;

if (arr[size - 1] > num)
    return CheckSumPossibility(num, arr, size - 1);

return CheckSumPossibility(num, arr, size - 1) ||
    CheckSumPossibility(num - arr[size - 1], arr, size - 1);
	return 0;
	}

int main(int argc, char** argv) {
	int MAX_SIZE = 8;
	int arr[MAX_SIZE];
	int arraySize = sizeof(arr) / sizeof(arr[0]);
	int num = 129;
	int returnVal;
      
	for(int i = 0; i < arraySize; ++i)
	{
		cin >> arr[i];
	}

returnVal = CheckSumPossibility(num, arr, arraySize);
	
	if(returnVal ==1)
	{
		cout << "Possible!" << endl;
	}
	else
	{
		cout << "Not possible!" << endl;
	}
	return 0;
}
