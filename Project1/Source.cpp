
#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<double> my_vector;
	my_vector.push_back(3.456);
	my_vector.push_back(5);

	double result = my_vector[1];
	cout << "Result is" << result;


	return 0;
}