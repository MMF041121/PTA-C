#include <stdio.h>
int main()
{
    int n;
    int h;
    scanf("%d %d", &h, &n); // 输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。
    // 将小球的运动按一次下落一次上升为一个整体进行划分
    double H = h * 1.0;    // 用H记录每一次球在最高点时的高度,h,h/2,h/4...初始化为h,类型是double类型
    double distance = 0.0; // distance用来记录皮球经过的总距离,题目要求的"皮球第n次落地时在空中经过的距离"则就是disitance - H
    // 计数控制用for,计算值和输入值控制一般用while.
    for (int i = 0; i < n; i++) // 计数控制,循环n次
    {
        // 例如,从最开始下落h,反弹起来h*1.0/2,此时H为第一次反弹高度h*1.0/2,distance为总距离h+h*1.0/2,皮球第1次落地时在空中经过的距离为distance-H=h+h*1.0/2-h*1.0/2=h,后面每个按照上文划分的整体进行相似运算
        distance += H; // 每一次先加下落高度
        H /= 2;
        distance += H; // 再加上升高度
    }
    if (n == 0)
    {
        printf("0.0 0.0");
    }
    else
    {
        printf("%.1f %.1f", distance - H, H);
    }
    return 0;
}
