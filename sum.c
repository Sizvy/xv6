#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf(1,"Numbers are: %d %d\n",a,b);
    printf(1,"Sum is: %d\n",getSum(a,b));
    exit();
}