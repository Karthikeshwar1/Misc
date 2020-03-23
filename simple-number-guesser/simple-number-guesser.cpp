#include <iostream>
#include <cstdlib> // for srand() and system() functions
#include <ctime> // for time() function
using namespace std;

int main() {
	int n, rating[50], max_nos, i, fav_no, sum = 0, ratings = 0, min = 0, max = 100, range;
	char choice = 'y';
	srand((unsigned)time(0));

	while (choice != 'n') {
		cout << "How many numbers you want?\n";
		cin >> max_nos;
		cout << flush;
		system("CLS");

		for (i = 0; i < max_nos; i++) {
			range = max - min;
			n = min + (rand() % range + 1);
			cout << n;
			cout << "\nHow much you like it? (Rate 1-5)\n";
			cin >> rating[i];

			sum += n * rating[i];
			ratings += rating[i];
			cout << flush;
			system("CLS");
		}

		fav_no = sum / ratings;
		cout << "Well I guess your favourite number is around " << fav_no << endl;

		cout << "Play again? (y/n)\n";
		cin >> choice;
	}

	return 0;
}
