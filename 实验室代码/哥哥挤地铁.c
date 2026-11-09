/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 计算旺仔哥哥在地铁上的最长停留时间
 * @param t int整型一维数组 序列  t，表示地铁在相邻两站之间的用时
 * @param tLen int t数组长度
 * @param s int整型一维数组 序列 s，表示地铁在每一站的停靠时间
 * @param sLen int s数组长度
 * @param x int整型 旺仔哥哥想从第 x 站出发
 * @param y int整型 旺仔哥哥想坐到第 y 站
 * @return int整型
 */
int countLongestSubwayTime(int* t, int tLen, int* s, int sLen, int x, int y ) {
    int time = 0;
    int n = y-x;
    for (int i = 0; i < n;i++){
        time += t[x-1+i];
        time += s[x-1+i];
    }
    return time + s[y-1];
}