#include <iostream>
#include<Windows.h>
#include <chrono>
#include <thread>


using namespace std;

int main() {
	int micros = 0;
	int mils = 0;
	int i = 0;
	int minutes = 0;
	int hours = 0;
	/*for (i = 0; i > 10000; i++) {
		this_thread::sleep_for(chrono::milliseconds(1)); //	std::this_thread::sleep_for(std::chrono::milliseconds(1));
		cout << i;
	};


}
*/


	while (true) {
		this_thread::sleep_for(chrono::milliseconds(1));
		// cout << " " << i;
		mils++;

		if (mils > 59) {
			i++;
			mils = 0;
			system("CLS");
			cout << "It has been " << hours << " hour(s), " << minutes << " minute(s), and " << i << " seconds.";
		}

		if (i > 59) {
			minutes++;
			i = 0;
			system("CLS");
		}
		if (minutes > 59) {
			hours++;
			i = 0;
			minutes = 0;
			system("CLS");
		}

	}

}