#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N;

	cin >> n1 >> n2;
	cin >> N;
	cout << n1 << n2;
	for (int i = 3; i<N; i++){
		n1 = n2;
		n2 = n1 + n2;	
		cout << n2 << " ";
	}

}
