#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Interval
{
int start, end;
};

bool by_start_time(Interval a, Interval b)
{
return a.start < b.start;
}

string find_schedule(vector <Interval> activities)
{
// Resulting string
int size = activities.size();
string schedule (size, ' ');

// Sorted copy of "activities"
vector <Interval> sorted = activities;
sort(sorted.begin(), sorted.end(), by_start_time);

// Duty indices for Cameron and Jamie in the sorted array
int cam = -1, jam = -1;

for (int i = 0; i < size; i++) {
// Assign task to Cameron or Jamie
if (cam == -1 || sorted[i].start >= sorted[cam].end) {
// If Cameron has no task or his task ends when sufficiently
cam = i;
// Find the actual index for the duty
for (int idx = 0; idx < size; idx++) {
if (activities[idx].start == sorted[i].start &&
activities[idx].end == sorted[i].end) {
// Ensure Jamie hasn't taken that duty
if (schedule[idx] != 'J') {
schedule[idx] = 'C';
break;
}
}
}
} else if (jam == -1 || sorted[i].start >= sorted[jam].end) {
jam = i;
// Find the actual index for the duty
for (int idx = 0; idx < size; idx++) {
if (activities[idx].start == sorted[i].start &&
activities[idx].end == sorted[i].end) {
// Ensure Cameron hasn't taken that duty
if (schedule[idx] != 'C') {
schedule[idx] = 'J';
break;
}
}
}
} else {
return "IMPOSSIBLE";
}
}

return schedule;
}

int main(int argc, char *argv[])
{
int t = 0, n = 0;
cin >> t;

for (int test = 1; test <= t; test++) {
cin >> n;
vector <Interval> activities (n, {-1, -1});

for (int i = 0; i < n; i++) {
// Read in the activities
cin >> activities[i].start >> activities[i].end;
}
cout << "Case #" << test << ": " <<
find_schedule(activities) << endl;
}
}