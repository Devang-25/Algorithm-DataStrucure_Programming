#include <iostream>
#include <vector>

using namespace std;

int main(){

string address;
cin >> address;

string x = "";
size_t pos = address.find(".");

while(pos != string::npos){
    
    address.replace(pos, 1, "[.]");
    pos = address.find(".", pos + 3);
}

cout << address << endl;

return 0; 
}
