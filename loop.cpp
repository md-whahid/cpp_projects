#include <iostream>
using namespace std;
int main()
{
  bool found = false;
  int arrSize;
  cout << "Enter array size: ";
  cin >> arrSize;

  int array[arrSize];

  cout << "Enter " << arrSize << " elements: ";

  for (int i = 0; i < arrSize; i++)
  {
    int element;
    cin >> element;
    array[i] = element;
  }

  int delElemnt;
  cout << "Delet a number: ";
  cin >> delElemnt;

  for (int i = 0; i < arrSize; i++)
  {
    if (array[i] == delElemnt)
    {
      cout << "........\n";
      for (int j = i; j < (arrSize - 1); j++)
      {
        array[j] = array[j + 1];
        arrSize--;
        found = true;
      }
    }
  }
  if (found == true)
  {
    cout << "deleted successfully!\n";
    cout << "array size: " << sizeof(array) / sizeof(int);
    cout << array[4];
  }
  if (found == false)
  {
    cout << "deleted unsuccessfully!\nSorry\n";
    cout << "array size: " << sizeof(array) / sizeof(int);
  }
  cout << ">>> " << array[0];
  cout << "\n>>> " << array[1];
  cout << "\n>>> " << array[2];
  cout << "\n>>> " << array[3];
  cout << "\n>>> " << array[4];
  cout << "\n>>> " << array[5];
  cout << "\n>>> " << array[6];
  cout << "\n>>> " << array[7];
  cout << "\n>>> " << array[8];
  cout << "\n>>> " << array[9];
  return 0;
}