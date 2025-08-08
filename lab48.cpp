#include <iostream>
using namespace std;

int main()
{
	int arr[6];

	for (int i = 0;i < 6;++i) {
		cout << "Element - " << i<<" : ";
		cin >> arr[i];
	}

	for (int i = 0;i < 6;++i) {
		for (int j = i+1;j < 6;++j) {
			if (arr[i] < arr[j]) {
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}

	cout << "The Second largest element in the array is : " << arr[1] << endl;
}

