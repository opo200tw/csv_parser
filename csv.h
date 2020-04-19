#ifndef CSV_DOT_H_INCLUDE_GUARD
#define CSV_DOT_H_INCLUDE_GUARD

#define CSV_ERR_LONGLINE 0
#define CSV_ERR_NO_MEMORY 1

int count_fields( const char *line );
char **parse_csv(const char *line, int fieldcnt);
void free_csv_line( char **parsed );
char **split_on_unescaped_newlines(const char *txt);
char *fread_csv_line(FILE *fp, int max_line_size, int *done, int *err);

#endif
