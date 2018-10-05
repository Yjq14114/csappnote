#include <stdio.h>
/**
 * 位设置
 * 在m为1的每个位置上将x置位为1
 */
int bis(int x, int m) {
    return x | m;
}
/**
 * 位清除
 *  在m为1的每个位置上将x置位为0
 */
int bic(int x, int m) {
    return x & ~m;
}
int bool_or(int x, int y) {
    return bis(x, y);
}
/**
 * 利用等式: 
 * x ^ y = (x & ~m) | (~m & x)
 */
int bool_xor(int x, int y) {
    return bis(bic(x, y), bic(y, x));
}
void main(int argc, char **argv[]) {

}