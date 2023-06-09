#include <iostream>

/**
 * 压缩字符除按 统计字符出现的次数
 *
 *
 * */



char* FormatString(const char* pt);

int main() {
    char temp[] = "aaabbbbcc";
    char* str = temp;
    std::cout << FormatString(str) << std::endl;
    return 0;
}
char* FormatString(const char* pt)
{
    char* s = new char[2*strlen(pt) + 1];

    if (s != NULL)
    {
        int len = strlen(pt);
        int k = 0;
        for (int i = 0, j = 0; i < len; i=j)
        {
            int num = 0;
            while (pt[i] == pt [j])
            {
                j++;
                num++;
            }
            s[k++] = pt[i];
            s[k++] = num + '0';
        }
        s[k] = '\0';
    }


    return s;
}
