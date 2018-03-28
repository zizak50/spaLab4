/* vjezba 4 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "matrix.h"

/* rekurzivno trazi najlaksi spust kroz matricu */
unsigned traverseRecursive(struct matrix *matrix, int row, int column);
/* dinamikom trazi najlaksi spust kroz matricu */
unsigned traverseDynamic(struct matrix *matrix, int row, int column);


int main() {

	const unsigned num_rows = 3;
	const unsigned num_columns = 3;
	const unsigned min_cost = 0;
	const unsigned max_cost = 9;
	const unsigned ending_row = num_rows - 1;
	const unsigned ending_column = num_columns - 1;
	unsigned sol;

	struct matrix *matrix;

	srand((unsigned) time(NULL));

	matrix = matrix_new(num_rows, num_columns);

	matrix_initialize(matrix, min_cost, max_cost);

	matrix_print(matrix);

	sol = traverseRecursive(matrix, ending_row, ending_column);
	printf("Za rekurzivni prolaz matricom najbrzi put iznosi %u\n", sol);

	sol = traverseDynamic(matrix, ending_row, ending_column);
	printf("Za prolaz matricom dinamikom najbrzi put iznosi %u\n", sol);

	matrix_delete(matrix);

	return 0;
}


unsigned traverseRecursive(struct matrix *matrix, int row, int column) {

	return 0;
}

unsigned traverseDynamic(struct matrix *matrix, int row, int column){

	return 0;
}

