#include <iostream>
using namespace std;

int searchArray(string foodList[], int size, string food);
int main() {
  string foodList[] = {"pizza", "burger", "sandwich", "fries"};
  string food;
  int index;
  int size = sizeof(foodList) / sizeof(foodList[0]);

  cout << "Enter the food you want" << endl;
  cin >> food;

  index = searchArray(foodList, size, food);

  if (index != -1){
    cout << "The food is found at index " << index+1 << endl;
    cout << "The food is " << foodList[index];
  }
  else {
    cout << "The food is not on the list";
  }

  return 0;
}

int searchArray(string foodList[], int size, string food){
  for  ( int i = 0; i < size; i++){
    if(foodList[i] == food) {
      return i;
    }
    
  }
  return -1;
}
