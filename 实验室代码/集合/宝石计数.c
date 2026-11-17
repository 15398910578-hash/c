/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param jewels string字符串 
 * @param stones string字符串 
 * @return int整型
 */
int numJewelsInStones(char* jewels, char* stones) {
    int cnt = 0;
    for (int i = 0; stones[i]; i++)
        if (strchr(jewels, stones[i])) cnt++;
    return cnt;
}