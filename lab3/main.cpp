#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

//sum is 664, average is 66.4,
//7 will pass, highest score is 90 (index 7),
//lowest score is 2 (index 9)

int main() {
	int scores[] = {85, 10, 70, 80, 90, 98, 92, 60, 77, 2};
	int n = sizeof(scores) / sizeof(scores[0]); //finding size of array but unsure about using these commands
	int sum = 0;

	for (int i = 0; i < 10; i++) // find sum of array
	{
		sum += scores[i];
	}

	double avg = sum / n; // find avg of array

	int j = 0;
	int p = 0;

	while (j < 10){
		if (scores[j] >= 70) // find how many students will pass
		{
			p++;
		}
	}
	int maxScore = scores[0];
	int maxIndex = 0;
	int lowestScore = scores[0];
	int lowestIndex = 0;
	for (int k = 1; k < 10; k++) // find lowest and highest score in array w/o sorting
	{
		if (scores[k] > maxScore) {
			maxScore = scores[k];
			maxIndex = k;
		} else {
			lowestScore = scores[k];
			lowestIndex = k;
		}
	}
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << fixed << setprecision(1) << avg << endl;
	cout << p << " will pass" << endl;
	cout << "Highest score is: " << maxScore << endl;
	cout << "Lowest score is: " << lowestScore << endl;


}