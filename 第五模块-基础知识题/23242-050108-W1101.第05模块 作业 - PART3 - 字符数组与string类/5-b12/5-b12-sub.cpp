/*朱俊泽 2351114 信15*/

/* 函数实现部分，{ }内的东西可以任意调整，目前的return 0只是一个示例，可改变 */

/* 不允许定义任何形式的外部全局、静态全局、宏定义、只读变量 */


int tj_strlen(const char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len = i+1;
    }
    return len; //return值可根据需要修改
}


int tj_strcat(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s1=tj_strlen(s1);
    int len_s2 = tj_strlen(s2);
    for (int i = len_s1; i <=len_s1+ len_s2; i++)
    {
        s1[i] = s2[i - len_s1];
    }
    return 0; //return值可根据需要修改
}


int tj_strncat(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    if (len > len_s2)
    {
        for (int i = len_s1; i <len_s1 + len_s2; i++)
        {
            s1[i] = s2[i - len_s1];
        }
    }
    else
    {
        for (int i = len_s1; i < len_s1 + len; i++)
        {
            s1[i] = s2[i - len_s1];
        }
    }
    return 0; //return值可根据需要修改
}


int tj_strcpy(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    for (int i = 0; i <= len_s2; i++)
    {
        s1[i] = s2[i];
    }
    return 0; //return值可根据需要修改
}


int tj_strncpy(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    if (len > len_s2)
    {
        for (int i = 0; i <= len_s2; i++)
        {
            s1[i] = s2[i];
        }
    }
    else
    {
        for (int i = 0; i <= len; i++)
        {
            s1[i] = s2[i];
        }
    }

    return 0; //return值可根据需要修改
}


int tj_strcmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    for (int i = 0; i <= len_s1 && i <= len_s2 && (s1[i] != '\0' || s2[i] != '\0'); i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return 0; //return值可根据需要修改
}


int tj_strcasecmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    int i = 0;
    for (i = 0;  i <= len_s1 && i <= len_s2 && (s1[i] != '\0' || s2[i] != '\0'); i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] >= 'a' && s1[i] <= 'z' && s1[i] - s2[i] == 32)
                continue;
            else if (s1[i] >= 'A' && s1[i] <= 'Z' && s1[i] - s2[i] == -32)
                continue;
            else
            {
                if (s1[i] >= 'A' && s1[i] <= 'Z')
                    return s1[i] - s2[i] + 32;
                else if (s2[i] >= 'A' && s2[i] <= 'Z')
                    return s1[i] - s2[i] - 32;
                else
                    return s1[i] - s2[i];
            }
        }
    }
    return s1[i] - s2[i];
    return 0; //return值可根据需要修改
}


int tj_strncmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    for (int i = 0; i <= len_s1 && i<len &&i <= len_s2 && (s1[i] != '\0' || s2[i] != '\0'); i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return 0; //return值可根据需要修改
}


int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len_s2 = tj_strlen(s2);
    int len_s1 = tj_strlen(s1);
    int i = 0;
    for (i = 0; i <= len_s1 &&i<len && i <= len_s2 && (s1[i] != '\0' || s2[i] != '\0'); i++)
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] >= 'a' && s1[i] <= 'z' && s1[i] - s2[i] == 32)
                continue;
            else if (s1[i] >= 'A' && s1[i] <= 'Z' && s1[i] - s2[i] == -32)
                continue;
            else
            {
                if (s1[i] >= 'A' && s1[i] <= 'Z')
                    return s1[i] - s2[i] + 32;
                else if (s2[i] >= 'A' && s2[i] <= 'Z')
                    return s1[i] - s2[i] - 32;
                else
                    return s1[i] - s2[i];
            }
        }
    }
    if (i == len)
        return 0;
    else
        return s1[i] - s2[i];
    return 0; //return值可根据需要修改
}


int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */

    int len = tj_strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] - 'a' >= 0 && str[i]-'a'<=26)
        {
            str[i] -= 32;
        }
    }
    return 0; //return值可根据需要修改
}

int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len = tj_strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] - 'A' >= 0 && str[i] - 'A' <= 26)
        {
            str[i] += 32;
        }
    }
    return 0; //return值可根据需要修改
}

int tj_strchr(const char str[], char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len = tj_strlen(str);
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)return i + 1;
    }
    
    return 0; //return值可根据需要修改
}

int tj_strstr(const char str[], const char substr[])
{
    int len = tj_strlen(str);
    int len_sub = tj_strlen(substr);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == substr[0])
        {
            int tempi = i; int x = 0;
            while (tempi < len)
            {
                if (str[tempi] == substr[x])
                {
                    x++; tempi++;
                }
                else
                    break;
                if (x == len_sub)
                {
                    return i+1;
                }
            }
        }
    }
    return 0;
}


int tj_strrchr(const char str[], const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len = tj_strlen(str);
    int index = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ch)return i + 1;
    }

    return 0; //return值可根据需要修改
}


int tj_strrstr(const char str[], const char substr[])
{
    int len = tj_strlen(str);
    int len_sub = tj_strlen(substr);
    for (int i = len-1; i >=0; i--)
    {
        if (str[i] == substr[0])
        {
            int tempi = i; int x = 0;
            while (tempi < len)
            {
                if (str[tempi] == substr[x])
                {
                    x++; tempi++;
                }
                else
                    break;
                if (x == len_sub)
                {
                    return i + 1;
                }
            }
        }
    }
    return 0;
}


int tj_strrev(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int len = tj_strlen(str);
    if (len == 0)
        return 0;
    else if (len % 2 == 0)
    {
        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    else
    {
        for (int i = 0; i < len / 2; i++)
        {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    
    return 0; //return值可根据需要修改
}
