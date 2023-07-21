#include<stdio.h>
int main()
{
    string strin = "4(v)2(r)3(t)";
    expandString(strin);
    string temp = "";
    int j;

    for (int i = 0; i < strin.length(); i++)
    {
        if (strin[i] >= 0)
        {


            int num = strin[i] - '0';
            if (strin[i + 1] == '(')
            {


                for (j = i + 1; strin[j] != ')'; j++)
                {
                    if ((strin[j] >= 'a' && strin[j] <= 'z') ||
                        (strin[j] >= 'A' && strin[j] <= 'Z'))
                    {
                        temp += strin[j];
                    }
                }


                for (int k = 1; k <= num; k++)
                {
                    cout << (temp);
                }

                num = 0;
                temp = "";

                if (j < strin.length())
                {
                    i = j;
                }
            }
        }
    }
}

