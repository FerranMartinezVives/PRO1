#include <iostream>
#include <vector>
using namespace std;

struct Student {
	int idn;
	string name;
	double mark;
	bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
	int n = stu.size();
	min = -1;
	max = -1;
	avg = -1;
	bool first = true;
	double count = 0;
	for (int i = 0; i < n; ++i) {
		if (not stu[i].repeater and stu[i].mark != -1) {
			if (first) {
				++count;
				min = stu[i].mark;
				max = min;
				avg = min;
				first = false;
			}
			else {
				++count;
				if (stu[i].mark < min) min = stu[i].mark;
				if (stu[i].mark > max) max = stu[i].mark;
				avg += stu[i].mark;
			}
		}
	}
	if (avg != -1) avg /= count;
}