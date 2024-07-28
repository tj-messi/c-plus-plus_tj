/*朱俊泽 2351114 信15*/

#include <cstdio> 

int tj_strlen(const char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL)
        return 0;
    int cnt = 0;
    for (; *str != '\0'; cnt++, str++)
    {

    }
    return cnt;
}
char *tj_strcat(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* ans = s1;
    if (s1 == NULL)
        return ans;
    for (; *s1 != '\0'; s1++)
    {

    }
    if (s2 == NULL)
        return ans;
    for (; *s2 != '\0'; s1++, s2++)
    {
        *s1 = *s2;
    }
    *s1 = '\0';
    return ans;
}
char *tj_strncat(char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* ans = s1;
    if (s1 == NULL)
        return ans;
    for (; *s1 != '\0'; s1++)
    {

    }
    if (s2 == NULL)
        return ans;
    int len2 = tj_strlen(s2);
    if (len > len2)
    {
        for (;len2>0;len2--,s1++,s2++)
        {
            *s1 = *s2;
        }
    }
    else
    {
        len2 = len;
        for (; len2 > 0; len2--,s1++,s2++)
        {
            *s1 = *s2;
        }
    }
    //s1++;
    *s1 = '\0';
    return ans;
}
char *tj_strcpy(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* ans = s1;
    if (s1 == NULL)
        return ans;
    if (s2 == NULL)
    {
        *s1 = '\0';
        return ans;
    }
    while (*s2 != '\0')
    { 
        *s1 = *s2;
        s1++; s2++;
    }
    *s1 = '\0';
    return ans;
}
char *tj_strncpy(char *s1, const char *s2, const int len)
{
    char* ans = s1;
    if (s1 == NULL)
        return ans;
    if (s2 == NULL)
        return ans;
    int len2 = tj_strlen(s2);
    if (len > len2)
    {
        for (; len2 > 0 && *s2!='\0'; len2--, s1++, s2++)
        {
            *s1 = *s2;
        }
    }
    else
    {
        len2 = len;
        for (; len2 > 0 && *s2 != '\0'; len2--, s1++, s2++)
        {
            *s1 = *s2;
        }
    }
    //*s1 = '\0';
    return ans;
}
int tj_strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL)
            return 0;
    if (s1 == NULL && s2 != NULL)
            return -1;
    if (s2 == NULL && s1 != NULL)
            return 1;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (; (*s1 != '\0' || *s2 != '\0'); s1++, s2++)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
    }
    return 0;
}
int tj_strcasecmp(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL)
        return 0;
    if (s1 == NULL && s2 != NULL)
        return -1;
    if (s2 == NULL && s1 != NULL)
        return 1;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (; (*s1 != '\0' || *s2 != '\0'); s1++, s2++)
    {
        if (*s1 != *s2)
        {
            if( (*s2 >= 'A' && *s2 <= 'Z'))
            {
                if (*s1 - (*s2 + 'a' - 'A') == 0)
                    continue;
                return *s1 - (*s2 + 'a' - 'A');
            }
            if ((*s1 >= 'A' && *s1 <= 'Z'))
            {
                if (*s1 + 'a' - 'A' - *s2 == 0)
                    continue;
                return *s1 + 'a' - 'A' - *s2;
            }
            else
                return (*s1 - *s2);
        }         
    }
    return 0;
}
int tj_strncmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1)+1;
    int len2 = tj_strlen(s2)+1;
    int len_m;
    len1 > len2 ? len_m = len2 : len_m = len1;
    len_m > len ? len_m = len : len_m = len_m;
    if (s1 == NULL && s2 == NULL)
        return 0;
    if (s1 == NULL && s2 != NULL)
        return -1;
    if (s2 == NULL && s1 != NULL)
        return 1;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (;len_m>0 && (*s1 != '\0' || *s2 != '\0');len_m--, s1++, s2++)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
    }
    return 0;
}
int tj_strcasencmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len1 = tj_strlen(s1) + 1;
    int len2 = tj_strlen(s2) + 1;
    int len_m;
    len1 > len2 ? len_m = len2 : len_m = len1;
    len_m > len ? len_m = len : len_m = len_m;
    if (s1 == NULL && s2 == NULL)
        return 0;
    if (s1 == NULL && s2 != NULL)
        return -1;
    if (s2 == NULL && s1 != NULL)
        return 1;
    for (;len_m>0 && (*s1 != '\0' || *s2 != '\0');len_m--, s1++, s2++)
    {
        if (*s1 != *s2)
        {
            if ((*s2 >= 'A' && *s2 <= 'Z'))
            {
                if (*s1 - (*s2 + 'a' - 'A') == 0)
                    continue;
                return *s1 - (*s2 + 'a' - 'A');
            }
            if ((*s1 >= 'A' && *s1 <= 'Z'))
            {
                if (*s1 + 'a' - 'A' - *s2 == 0)
                    continue;
                return *s1 + 'a' - 'A' - *s2;
            }
            else
                return (*s1 - *s2);
        }
    }
    return 0;
}
char *tj_strupr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* ans = str;
    if (str == NULL)
        return ans;
    for (; *str != '\0'; str++)
    {
        if (*str >= 'a' && *str <= 'z')
            *str += 'A' - 'a';
    }
    return ans;
}
char *tj_strlwr(char *str)
{
    char* ans = str;
    if (str == NULL)
        return ans;
    for (; *str != '\0'; str++)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 'a' - 'A';
    }
    return ans;
}
int tj_strchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    const char* pre = str;
    if (str == NULL)
        return 0;
    for (; *str != '\0'; str++)
    {
        if (*str == ch)
            return str - pre+1;
    }
    return 0;
}
int tj_strstr(const char *str, const char *substr)
{
    const char* pre = str;
    int len = tj_strlen(substr);
    if (str == NULL||substr==NULL)
        return 0;
    for (; *str != '\0'; str++)
    {
        if (*str == *substr)
        {
            const char* pstr = str;const char* psubstr = substr;
            while (*pstr == *psubstr&&(*pstr!='\0')&&*psubstr!='\0')
            {
                if (psubstr - substr == len-1)
                {
                    return str - pre + 1;
                }
                pstr++;
                psubstr++;
            }
        }
    }
    return 0;
}
int tj_strrchr(const char *str, const char ch)
{
    int len_str = tj_strlen(str);
    const char* pre = str;
    if (str == NULL)
        return 0;
    str += len_str-1;
    for (; *str != '\0'; str--)
    {
        if (*str == ch)
            return str - pre + 1;
    }
    return 0;
}
int tj_strrstr(const char *str, const char *substr)
{
    int len_str = tj_strlen(str);
    const char* pre = str;
    int len = tj_strlen(substr);
    if (str == NULL || substr == NULL)
        return 0;
    str += len_str - 1;
    for (; *str != '\0'; str--)
    {
        if (*str == *substr)
        {
            const char* pstr = str; const char* psubstr = substr;
            while (*pstr == *psubstr && (*pstr != '\0') && *psubstr != '\0')
            {
                if (psubstr - substr == len - 1)
                {
                    return str - pre + 1;
                }
                pstr++;
                psubstr++;
            }
        }
    }
    return 0;
}
char *tj_strrev(char *str)
{
    char* ans = str;
    if (str == NULL)
        return ans;
    int len_str = tj_strlen(str);
    char* rstr = str + len_str - 1;
    for (; rstr >= str; rstr--, str++)
    {
        char temp = *str;
        *str = *rstr;
        *rstr = temp;
    }
    return ans;
}