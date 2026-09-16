#include <stdio.h>
#include <string.h>

int main(void) {
char i[] = {'h','d','a','w','g','b','x','o','t','r','e','w','s','d','f','f','g','h','b','v','c','x','s'};
int n = sizeof(i)/sizeof(i[0]);
int j,k;
int t;

for (j = 0; j < n; j++)
{
    for (k = 0; k < n - j - 1; k++)
    {
        if (i[k] > i[k+1])
        {
            t = i[k+1], i[k+1] = i[k], i[k] = t;
        }
    }
}
printf("%c\n",i[1]);
return 0;
}