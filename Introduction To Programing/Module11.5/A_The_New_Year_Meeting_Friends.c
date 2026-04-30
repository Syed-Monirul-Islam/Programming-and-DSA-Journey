

#include <stdio.h>

int main() {
    int x1, x2, x3;
    
    // তিন বন্ধুর পজিশন ইনপুট নিচ্ছি
    if (scanf("%d %d %d", &x1, &x2, &x3) != 3) return 0;

    // সবচেয়ে বড় (max) এবং সবচেয়ে ছোট (min) পজিশন খুঁজে বের করা
    int max, min;

    // শুরুতে x1 কে max এবং min ধরে নিই
    max = x1;
    min = x1;

    // x2 এর সাথে তুলনা
    if (x2 > max) max = x2;
    if (x2 < min) min = x2;

    // x3 এর সাথে তুলনা
    if (x3 > max) max = x3;
    if (x3 < min) min = x3;

    // সর্বনিম্ন দূরত্ব হলো সবচেয়ে বড় এবং ছোট পজিশনের পার্থক্য
    int total_distance = max - min;

    printf("%d\n", total_distance);

    return 0;
}