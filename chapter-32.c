#include <string.h>
/* 
 * 朴素字符串匹配 
 * 时间复杂度：O((n-m+1)m)
 */
int naive_string_matcher(char* T, char* P)
{
    int n = strlen(T);
    int m = strlen(P);

    for (int i = 0; i < n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (T[j + i] != P[j]) {
                break;
            } else {
                continue;
            }
        }
        if (j == m) {
            return i;
        } else {
            continue;
        }
    }

    return -1;
}
