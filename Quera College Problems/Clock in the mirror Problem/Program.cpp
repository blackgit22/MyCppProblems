#include <iostream>
using namespace std;
int main() {
	int hour_m, minutes_m,hour,minutes;
	char hour_format, minute_format;
	cin >> hour_m >> minutes_m;
	if (hour_m == 0) { 
		hour = 0; 
	}
	else {
		hour = 12 - hour_m;
	}
	if (minutes_m == 0) { minutes = 0; }
	else{
		minutes = 60 - minutes_m;
	}
	if (hour<10 and minutes<10) {
		cout <<'0'<< hour << ":" <<'0'<< minutes;
		exit(0);
	}
	if (hour < 10) {
		cout << '0' << hour << ':' << minutes;
		exit(0);
	}
	if (minutes < 10) {
		cout << hour << ':' << '0' << minutes;
		exit(0);
	}
	else {
		cout << hour << ":" << minutes;
		exit(0);
	}
}
//https://quera.ir/college/2572/chapter/7083/lesson/24117/#page=1,filter=ALL