#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){

#Highest number in square
order_of_sq = int(input("Enter order of sq: "))

#Number you want to start the square with
top_left = int(input("Enter top left number: "))

#Sets a placeholder for a variable called top_left_init
top_left_init=0

#Sets the initial value of top_left to a new variable because the code will change the value of top left later on
top_left_init += top_left

#Initialize the value of count
count = 0

#Add 1 to the highest value in latin square to account for the range function (the ending number is always one less than the number you enter into the range function)
for values in range (1,order_of_sq+1):

#Prevents the program from adding too many characters to the line
while count != order_of_sq:

#Prints numbers with spaces after them in a horizontal manner
print(top_left,sep=' ',end=' ')

#Adds 1 to the top_left
top_left += 1

#Count is used to keep track of how many characters are in your line
count+=1

#Restarts the numbers in your line when you reach the highest number
if top_left == order_of_sq+1:
top_left = 1

#Creates a new row
print()
count = 0

#Calls the initial value of top_left and adds 1 to it before beginning the next row
top_left_init += 1

#Resets top_left_init to 1 if it reaches the highest number in the square
if top_left_init == order_of_sq + 1:
top_left_init = 1
top_left = top_left_init
else:
top_left = top_left_init
}