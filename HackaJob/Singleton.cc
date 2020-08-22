#include <iostream>
#include <vector>

using namespace std;

int findSingle(){
std::vector<int> student_list;
student_list.push_back(5);
student_list.push_back(3);
student_list.push_back(2);
student_list.push_back(2);
student_list.push_back(3);
student_list.push_back(5);
student_list.push_back(4);
student_list.push_back(6);
student_list.push_back(9);
student_list.push_back(6);
student_list.push_back(4);
student_list.push_back(12);
student_list.push_back(8);
student_list.push_back(9);
student_list.push_back(12);;

//int n = sizeof(student_list) / sizeof(student_list[0]); 

int res = student_list[0]; 
for (int i = 1; i < student_list.size(); i++) {
    res = res ^ student_list[i]; 
    cout << res << endl;
    }
    return res;
}

int main() {

    cout << findSingle() << endl;
}