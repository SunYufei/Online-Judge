/*
    交换瓶子

    有N个瓶子，编号 1 ~ N，放在架子上。

    比如有5个瓶子：
    2 1 3 5 4

    要求每次拿起2个瓶子，交换它们的位置。
    经过若干次后，使得瓶子的序号为：
    1 2 3 4 5

    对于这么简单的情况，显然，至少需要交换2次就可以复位。

    如果瓶子更多呢？你可以通过编程来解决。

    输入格式为两行：
    第一行: 一个正整数N（N<10000）, 表示瓶子的数目
    第二行：N个正整数，用空格分开，表示瓶子目前的排列情况。

    输出数据为一行一个正整数，表示至少交换多少次，才能完成排序。

    例如，输入：
    5
    3 1 2 5 4

    程序应该输出：
    3

    再例如，输入：
    5
    5 4 3 2 1

    程序应该输出：
    2

    资源约定：
    峰值内存消耗 < 256M
    CPU消耗  < 1000ms
*/
#include <stdio.h>
#include <string.h>

int num[10010];
int flag[10010];
int ans = 0;

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &num[i]);
    for (i = 1; i <= n; i++)
        flag[num[i]] = i;
    for (i = 1; i <= n; i++) {
        if (i != num[i]) {
            j = num[i];
            num[i] ^= num[flag[i]] ^= num[i] ^= num[flag[i]];
            flag[i] ^= flag[j] ^= flag[i] ^= flag[j];
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
