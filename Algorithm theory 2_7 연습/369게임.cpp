#include<cstdio>
#include<cstring>
#define mod 20150523
#define f369(x) ((x)&&(x)%3==0)
const int MXL = 1e5 + 1;
int n, a[MXL + 1][3] = { 1 };
char s1[MXL + 1], s2[MXL + 1];
int f(char *s, int len) {
    int t = 0, ret = 0;
    for (int i = 0; i < len; i++) ret = (ret * 10 + s[i] - '0') % mod;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < s[i] - '0'; j++, t = (t + 1) % 3) if (!f369(j))
            ret = (ret - a[len - i - 1][(2 - t) % 3] - a[len - i - 1][(4 - t) % 3] + mod * 2) % mod;
        if (f369(s[i] - '0')) break;
    }
    return ret;
}
int main() {
    for (int i = 1; i <= MXL; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 10; k++) if (!f369(k)) a[i][j] = (a[i][j] + a[i - 1][(j + 9 - k) % 3]) % mod;
    scanf("%s%s", s1, s2);
    int t = 0, ck = 0;
    for (int i = 0; s2[i]; i++) {
        t += s2[i] - '0';
        ck |= f369(s2[i] - '0');
    }
    printf("%d", (f(s2, strlen(s2)) - f(s1, strlen(s1)) + (t % 3 == 0 | ck) + mod) % mod);
    return 0;
}
