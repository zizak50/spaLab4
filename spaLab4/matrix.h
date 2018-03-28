#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

struct matrix {
	unsigned num_rows;
	unsigned num_columns;
	unsigned *cells;
};

/* alocira novu matricu sa num_rows redaka i num_columns stupaca */
struct matrix *matrix_new(unsigned num_rows, unsigned num_columns);

/* dohvaca element u retku row i stupcu column */
unsigned matrix_get(const struct matrix *matrix, int row, int column);

/* postavlja element u retku row i stupcu column na vrijednost cost */
void matrix_set(struct matrix *matrix, int row, int column, unsigned cost);

/* popunjava matricu slucajnim brojevima u intervalu [min_cost, max_cost] */
void matrix_initialize(struct matrix *matrix, unsigned min_cost, unsigned max_cost);

/* ispisuje cijelu matricu na standardni izlaz */
void matrix_print(const struct matrix *matrix);

/* oslobadja memoriju alociranu za matricu */
void matrix_delete(struct matrix *matrix);

#endif /* MATRIX_H_INCLUDED */
