#include <iostream>
using namespace std;
 
// function declaration
int Insert(int* pList, int& listSize, int value);
 
int main () {
    
    bool ret;
    
    int listSize = 5;
    int* pList [listSize];
    
    ret = Insert(pList, &listSize, 1);
    
    std::cout << ret << std::endl;
 
   return 0;
}

bool Insert(int* pList, int& listSize, int value) {
   // local variable declaration
   int i, j;

    for (i = 0; i < listSize; i++)
    {
      if (value > pList[i])
      {
        for (j = 0; j < listSize; j++)
        {
          pList[j + 1] = pList[j];
        }

        pList[j] = value;
        return (true);
      }
    }
    return (false);
}