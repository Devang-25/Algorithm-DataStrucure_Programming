#include <iostream>
#include <stdio.h>

using namespace std;

int Insert(int* pList, int& listSize, int value);

int main() {

bool ret;

int listSize = 5;
int* pList [listSize];

ret = Insert(pList, &listSize, 1);

std::cout << ret << std::endl;

  //int photoLength, numOfPhotos, photoHeight, photoWidth;

  // Reading photoLength
  //printf("Enter Length: \n");
  //	scanf("%d", &photoLength);

  // Reading numOfPhotos
  //printf("Enter Number of Photos: \n");
  //	scanf("%d", &numOfPhotos);

  //for(int i = 0; i < numOfPhotos; i++){

  // Enter Width
  //printf("Enter Width: \n");
  //      scanf("%d", &photoWidth);
        
        // Enter Height
        //printf("Enter Height: \n");       
      //  scanf("%d", &photoHeight);

        //if(photoHeight < photoLength || photoWidth < photoLength ){

          //  printf("UPLOAD AGAIN");

       // } else if (photoHeight == photoLength || photoWidth == photoLength ) {

         //   printf("ACCEPTED");

       // } else {

         //   printf("CROP IT");
       // }
   // }
    
    return 0;
}

bool Insert(int* pList, int& listSize, int value ) {
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
