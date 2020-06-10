#include <iostream>

#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	int *ary = new int[n];

	for(int i=0; i<n ;i++)

		cin >> ary[i];

	sort(ary, ary + n);



	int min = ary[0];

	int cnt = 1;

	for (int i = 1; i <= min; i++)

	{

		if (min%i == 0) {

			for (int j = 1; j < n; j++) {

				if (ary[j] % i == 0)

					cnt++;

				else

					break;

			}

			if (cnt == n)

				cout << i << "\n";

			cnt = 1;	

		}

	}

}