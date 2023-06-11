#include "mysql_function.h"
#include <stdio.h>

void printQueryResult(MYSQL *conn, const char *query) {
    MYSQL_RES *res;
    MYSQL_ROW row;
    int num_fields, i;

    // 쿼리 실행
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 오류: %s\n", mysql_error(conn));
        return;
    }

    // 결과 가져오기
    res = mysql_store_result(conn);
    if (res == NULL) {
        fprintf(stderr, "결과 가져오기 오류: %s\n", mysql_error(conn));
        return;
    }

    // 필드 정보 가져오기
    MYSQL_FIELD *fields = mysql_fetch_fields(res);
    int num_columns = mysql_num_fields(res);


    // 결과 읽기
    while ((row = mysql_fetch_row(res))) {
        for (i = 0; i < num_columns; i++) {
            printf("%s: %s\n", fields[i].name, row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }
    // 메모리 해제
    mysql_free_result(res);
}