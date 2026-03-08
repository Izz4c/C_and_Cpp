#include <stdio.h>

// Checks for the smallest element in a given row of a given matrix
int minrow_check(int rows, int columns, int matrix[rows][columns], int row){
    int min = matrix[row][0];
    int min_index = 0;
    for(int i=0;i<columns;i++){
        if(matrix[row][i] < min){
            min = matrix[row][i];
            min_index = i;
        } 
        
    }
    return min_index;
}

// Checks for the largest element in a given column of a given matrix
int maxcol_check(int rows, int columns, int matrix[rows][columns], int column){
    int max = matrix[0][column];
    int max_index = 0;
    for(int i=0;i<rows;i++){
        if(matrix[i][column] > max){
            max = matrix[i][column];
            max_index = i;
        }
    }
    return max_index;
}

int second_largest(int rows, int columns, int matrix[rows][columns]){
    int largest = matrix[0][0];
    int second = largest;
    int second_index = 0;
    for(int i=0; i<rows*columns; i++){
        if (matrix[i/columns][i%columns] > largest)
            largest = matrix[i/columns][i%columns];
    }
    int f = 0;
    for (int i=0; i<rows*columns; i++) {
        // If current element isn't the largest element
        if (matrix[i/columns][i%columns] != largest) {
            // To initialize second largest element to something that isn't the largest element
            if (!f) {
                second = matrix[i/columns][i%columns];
                f = 1;
            }
            if (matrix[i/columns][i%columns] > second){
                second = matrix[i/columns][i%columns];
                second_index = i;
            }
            
        }  
    }
    return second_index;

}
// Prints the positions of all saddle points
int saddle(int rows, int columns, int matrix[rows][columns]){
    // Loops through all rows
    int found = 0;
    for(int i = 0; i < rows; i++){
        // Gives the column number of the min element in the current row
        int min_index = minrow_check(rows,columns,matrix,i); 
        // Gives the row number of the max element in the column min_index 
        int max_index = maxcol_check(rows,columns,matrix,min_index);
        // If the row number of the max element in column min_index is = current row i
        if(max_index == i){
            found++;
            printf("Saddle point at %d,%d = %d\n",i,min_index,matrix[i][min_index]);
        }
    }
    if(found) printf("Found %d saddle points!\n",found);
    else printf("Found no saddle points!\n");
}

int main(){
    int rows,columns,ij;
    printf("Enter number of rows,columns : ");
    scanf("%d,%d",&rows,&columns);
    int matrix[rows][columns];

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter (%d,%d) : ",i,j);
            scanf("%d",&ij);
            matrix[i][j] = ij;
        }
    }
    saddle(rows,columns,matrix);
    int sl = second_largest(rows,columns,matrix);
    printf("Second largest element at %d,%d = %d\n",sl/columns,sl%columns,matrix[sl/columns][sl%columns]);

}