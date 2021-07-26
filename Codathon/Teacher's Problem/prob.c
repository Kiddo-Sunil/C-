/* Two numbers a and b are given (eg.9 and 3).find the highest possible power of b(eg.3)
 Such that it successfully divides factorial of a(eg.9)
 eg. 3^4=81 divides 9!=3628880
      i.e, 362880/81=4480
  Input: 9 3
  output: 4 */

  #include <stdio.h>
  #include <math.h>
  int main()
  {
      int a,b,fact=1,mul,res;
      printf("Enter two number: ");
      scanf("%d %d",&a,&b);
      for(int i=a;i>1;i--)
      {
          fact=fact*i;
      }
      for(int i=0;i<a;i++)
          {
              mul=pow(b,i);
              if(fact%mul==0)
              {
                res=i;
              }
          }
      printf("%d to the power of %d successfully divides %d!.\n",res,b,a);
      printf("Hence, Required Output is %d",res);
      return 0;

  }
