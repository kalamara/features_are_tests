#include <stdio.h>

typedef enum 
{
    ARITH_ADD = 0,
    ARITH_SUB,
    N_ARITH
} arith_operations;

int add(int x, int y)
{
   return x + y;    
}

int sub(int x, int y)
{
    return x - y;    
}

int my_algebra(int op, int x, int y)
{
  switch(op)
  {
      case ARITH_ADD:
          return add(x,y);
      case ARITH_SUB:
          return sub(x,y);
      default: return -1;     
  }
}

int main(int argc, char * argv[])
{
    int result = -1;
    if(argc==4)
    {
        int op = atoi(argv[1]);
    
        int x =  atoi(argv[2]);
        int y =  atoi(argv[3]);

       printf("%d\n",my_algebra(op, x,y));
    }
        
}
