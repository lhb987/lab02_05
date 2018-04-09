#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void main() {
	int num;
	vector<int> vec;

	while ( (cin>>num)) {
		vec.push_back(num);
	}

	cout << endl << "ordered array" << endl;

	sort(vec.begin(), vec.end(), greater<int>());

	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;

}