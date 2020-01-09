/*

    奖券数目

    有些人很迷信数字，比如带“4”的数字，认为和“死”谐音，就觉得不吉利。
    虽然这些说法纯属无稽之谈，但有时还要迎合大众的需求。
    某抽奖活动的奖券号码是5位数（10000-99999），要求其中不要出现带“4”的号码，
    主办单位请你计算一下，如果任何两张奖券不重号，最多可发出奖券多少张。

    请提交该数字（一个整数），不要写任何多余的内容或说明性文字。

    52488
*/
#include <stdio.h>

int main() {
    int a, b, c, d, e, ans = 0;
    for (a = 1; a < 10; a++) {
        if (a == 4)
            continue;
        for (b = 0; b < 10; b++) {
            if (b == 4)
                continue;
            for (c = 0; c < 10; c++) {
                if (c == 4)
                    continue;
                for (d = 0; d < 10; d++) {
                    if (d == 4)
                        continue;
                    for (e = 0; e < 10; e++) {
                        if (e == 4)
                            continue;
                        ans++;
                    }
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}