#include <iostream> 
using namespace std;  
#define MAX 100 
int data[MAX][3]; 
int len; 
void insert(int r, int c, int val) 
{ 
    data[len][0] = r; 
  
    data[len][1] = c; 
   
    data[len][2] = val; 
   
    len++; 
} 
void print() 
{ 
    cout << "\nDimension of Sparse Matrix: "
         << len << " x " << 3; 
    cout << "\nSparse Matrix: \nRow Column Value\n"; 
  
    for (int i = 0; i < len; i++) { 
  
        cout << data[i][0] << " "
             << data[i][1] << " "
             << data[i][2] << "\n"; 
    } 
} 
  
int main() 
{ 
    int i, j; 
    int r = 5, c = 4; 
   
    int a[r][c] = { { 0, 1, 0, 0 }, 
                    { 0, 0, 2, 0 }, 
                    { 0, 3, 0, 0 }, 
                    { 0, 0, 5, 0 }, 
                    { 0, 0, 0, 4 } }; 
    cout << "\nMatrix:\n"; 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            cout << a[i][j] << " "; 
        } 
        cout << endl; 
    } 
  
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            if (a[i][j] > 0) 
                insert(i, j, a[i][j]); 
  
    print(); 
  
    return 0; 
} 
