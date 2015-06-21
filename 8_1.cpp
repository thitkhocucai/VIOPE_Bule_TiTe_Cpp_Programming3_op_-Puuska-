#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = calculate_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
}

void print_matrix(int matrix[5][5])
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << matrix [i][j] << " ";
            if (j == 4) {
                cout << endl;
            }
        }
    }
}
int calculate_sum(int matrix[5][5])
{
    int sum = 0, i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}
