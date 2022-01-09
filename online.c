#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char const *argv[])
{
    printf(1,"Read count: %d\n",getreadcount());
    exit();
}