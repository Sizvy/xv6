#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char const *argv[])
{
    int size = argc;
    int i;
    int arr[size-1];
    for(i=1;i<argc;i++)
    {
        arr[i]=atoi(argv[i]);
    }
    printf(1,"Sum is: %d\n",getarraySum(size-1,arr));
    exit();
}