#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    test_trys = int(input())
    for try in range(test_trys):
    s = input()
    brackets = 0
    nested = ""
    if(len(s) == 1):
    nested += "("*int(s) + s + ")"*int(s)
    else:
    for ii,n in enumerate(s):
    if(ii == 0):
    lbrackets = int(n)
    rbrackets = int(n)-int(s[ii+1])
    elif(ii == (len(s)-1)):
    lbrackets = int(n)-int(s[ii-1])
    if(lbrackets > 0):
    nested += "("*lbrackets
    brackets+=lbrackets
    rbrackets = brackets
    nested+=n
    nested += ")"*rbrackets
    break
    
    else:
    lbrackets = int(n)-int(s[ii-1])
    rbrackets = int(n)-int(s[ii+1])
    if(lbrackets>0):
    nested += "("*lbrackets
    brackets+=lbrackets
    nested += n
    if(rbrackets>=0):
    nested += ")"*rbrackets
    brackets -= rbrackets

print("Case #{}: {}".format(try+1,nested))
}