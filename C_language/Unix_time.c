#include <stdio.h>
#include <time.h>

time_t time_cnt;
struct  tm time_date;
char *time_str;

int main(void) {
    printf("Hello World!\n");
    time_cnt = time(NULL);
    // time(&time_cnt);
    printf("%d\n", time_cnt);

    // 秒计数器转日期时间，格林尼治时间
    time_date = *gmtime(&time_cnt);
    printf("%d-%d-%d %d:%d:%d\n", time_date.tm_year+1900, time_date.tm_mon+1, time_date.tm_mday, time_date.tm_hour, time_date.tm_min, time_date.tm_sec);

    // 秒计数器转日期时间，本地时间
    time_date = *localtime(&time_cnt);
    printf("%d-%d-%d %d:%d:%d\n", time_date.tm_year+1900, time_date.tm_mon+1, time_date.tm_mday, time_date.tm_hour, time_date.tm_min, time_date.tm_sec);

    // 日期时间转秒计数器
    time_cnt = mktime(&time_date);
    printf("%d\n", time_cnt);

    // 秒计数器转字符串
    time_str = ctime(&time_cnt);
    printf(time_str);

    // 日期时间转字符串
    time_str = asctime(&time_date);
    printf(time_str);

    // 日期时间转字符串,自定义格式
    char t[50];
    strftime(t, 50, "%H:%M:%S", &time_date);
    printf(t);

    return 0;
};
