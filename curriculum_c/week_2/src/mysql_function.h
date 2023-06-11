#ifndef MYSQL_FUNCTION_H
#define MYSQL_FUNCTION_H
#include "/Users/daniealo/practice_c/curriculum_c/week_2/include/mysql.h"



void printqueryresult(MYSQL *conn,const char *query);
int checkDuplicateData(MYSQL *conn, const char *tableName, const char *columnName, int *data);
void connect();

#endif
