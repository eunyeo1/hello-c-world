
 
//exercisen2-10
#include <stdio.h>
int main(void)
{
    printf("%03d,%03d,%03d \n", 1,20,300);
    printf("%-3d,%-3d,%-3d \n", 1,20,300);
    printf("%+3d,%+3d,%+3d \n", 1,20,300);

    printf("%+3d, %+3d, %+3d \n",1,20,-300);

    return 0; 
} 

/*
//exercise 2-9
#include<stdio.h>
int main(void)
{
    printf("%f \n", 0.000123);
    printf("%F \n", 0.0001236);
    
    printf("%e \n", 0.000123);
    printf("%E \n", 0.0001236);

    printf("%g \n", 0.000123);
    printf("%G \n", 0.0000123456);

    printf("올해 우리나라 경제 성장률은 5%%입니다.\n");

    return 0;
}

//#exercise 2-8
#include<stdio.h>
int main(void)
{
    printf("%d \n", 2147483647);
    printf("%lld \n", 2147483650LL);
    printf("%u \n", 4294967295);

    return 0;
}

//exercise 2-7
#include <stdio.h>
int main(void)
{
    printf("a를 대문자로 표현하면 %c입니다.\n",'A');
    printf("%s %c입니다. \n", "a를 대문자로 표현하면", 'A');
    printf("%s %s\n","2 곱하기 3은",2*3,"입니다.");

    return 0;
}



// exercise 2-6

#include <stdio.h>
int main(void)
{  
   printf("10진수 정수: %d \n",0.5);
   printf("10진수 실수: %f \n",0.5);
   printf("10진수 실수: %1f \n",0.5);

   printf("소수점 이하 6자리 이상 : %f \n");
       
   return 0;
    
}

  

// exercise 2-5
#include <stdio.h>
int main()
{
   printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. /n" , 50,50,50);
   printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. /n" , -50,-50,-50);    
    // 16진수와 8진수는 음수 표현 불가
    
   return 0;
}

// exercise 2-4 

#include <stdio.h>

int main()
{
    printf("%d 더하기 %d는 %d입니다.\n",3,5,3+5);
    printf("%i 더하기 %i는 %i입니다.\n",3,5,3+5);
    printf("%d-%d = %d입니다.\n",3,5,3-5);
    printf("%i-%i = %i입니다.\n",3,5,3-5);
    
    return 0;
}

// exercise 2-3
# include <stdio.h>
int main(void)

{  
    printf("\t Hello C! \n Hello world! \n");
    printf("큰따옴표 : \" \" \n");
    printf("작은따옴표 : \' \' \n");
    printf("역슬래시 : \\ \n");

    return 0;
}

// exercise 2-2
#include <stdio.h>

int main(void)
{
    printf("heollo C world \n!");
    return 0;
}


//exercise2-1
#include <stdio.h>

int main()
{

    printf("Hello World!");
    return 0;
  
}

*/