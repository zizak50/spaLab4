#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

struct matrix *matrix_new(unsigned num_rows, unsigned num_columns) {

	struct matrix *matrix;

	matrix = malloc(sizeof(struct matrix));
	matrix->num_rows = num_rows;
	matrix->num_columns = num_columns;
	matrix->cells = malloc(num_rows * num_columns * sizeof(*matrix->cells));

	return matrix;

}

void matrix_initialize(struct matrix *matrix, unsigned min_cost, unsigned max_cost) {

	unsigned row, column;

	for (row = 0; row < matrix->num_rows; ++row)
		for (column = 0; column < matrix->num_columns; ++column)
			matrix_set(matrix, row, column, min_cost + rand() % (max_cost - min_cost + 1));

}

unsigned matrix_get(const struct matrix *matrix, int row, int column) {
	return *(matrix->cells + row * matrix->num_columns + column);
}

void matrix_set(struct matrix *matrix, int row, int column, unsigned cost) {
	*(matrix->cells + row * matrix->num_columns + column) = cost;
}

void matrix_print(const struct matrix *matrix) {

	unsigned row, column;

	for (row = 0; row < matrix->num_rows; ++row) {
		for (column = 0; column < matrix->num_columns; ++column)
			printf("%3u ", matrix_get(matrix, row, column));
		putchar('\n');
	}

}

void matrix_delete(struct matrix *matrix) {
	free(matrix->cells);
	free(matrix);
}
