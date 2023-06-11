#include <stdio.h>
#include "mysql_function.h"

int checkDuplicateData(MYSQL *conn, const char *tableName, const char *columnName, int *data) {
    char query[100];
    MYSQL_RES *res;
    MYSQL_ROW row;

    // 쿼리 생성
    sprintf(query, "SELECT COUNT(*) FROM %s WHERE %s = '%d'", tableName, columnName, *data);

    // 쿼리 실행
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 오류: %s\n", mysql_error(conn));
        return -1;
    }

    // 결과 가져오기
    res = mysql_store_result(conn);
    if (res == NULL) {
        fprintf(stderr, "결과 가져오기 오류: %s\n", mysql_error(conn));
        return -1;
    }

    // 결과 읽기
    row = mysql_fetch_row(res);
    int count = atoi(row[0]);

    // 메모리 해제
    mysql_free_result(res);

    // 중복 체크
    if (count > 0) {
        return 1; // 중복된 데이터가 존재함
    } else {
        return 0; // 중복된 데이터가 존재하지 않음
    }
}     
    