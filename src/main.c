//exercise 5-7
#include <stdio.h>
int main(void)
{
    int num1=10,num2=10;
    int a,b;

    a=++num1;
    printf("%d,%d \n",a,num1);
    
    b=num2++;
    printf("%d,%d \n", b, num2);

    return 0;
}

/*
//exercise 5-6
#include <stdio.h>
int main(void)
{
    int num1=10;
    printf("%d \n", num1);

    num1++;
    printf("%d \n", num1);

    ++num1;
    printf("%d \n", num1);

    --num1;
    printf("%d \n", num1);

    num1--;
    printf("%d \n", num1);

    return 0;

}

//exercise 5-5
#include <stdio.h>
int main(void)
{
    int num1=1, num2=2, num3=3, num4=4, num5=5;

    num1=num1 + num2;
    printf("복합 덧셈 연산 결과 : num1의 최종값 : %d \n", num1);

    num2=num2-2;
    printf("복합 뺄셈 연산 결과 : num2의 최종값 : %d \n", num2);

    num3=num3*2;
    printf("복합 곱셈 연산 결과 : num3의 최종값 : %d \n", num3);

    num4=num4/2;
    printf("복합 나눗셈 연산 결과 : num4의 최종값 : %d \n", num4);

    num5=num5%2;
    printf("복합 나머지 연산 결과 : num5의 최종값 : %d \n", num5);

    printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);

}

//exercise 5-4
#include <stdio.h>
int main(void)
{
    int num1, num2;

    num1=10/3;
    num2=10%3;

    printf("몫 : %d \n",num1);
    printf("나머지 : %d \n",num2);

    return 0;
}

//exercise 5-3
#include <stdio.h>
int main(void)
{
    int a,b;
    a=6;
    b=2;

    printf("덧셈 연산 결과 : %d \n", a+b);
    printf("뺄셈 연산 결과 : %d \n", a-b);
    printf("곱셈 연산 결과 : %d \n", a*b);
    printf("나누기 연산 결과 : %d \n", a/b);
    printf("나머지 연산 결과 : %d \n", a%b);

    return 0;
}


//exercise 5-2
#include <stdio.h>
int main(void)
{
    int i=0, j=0, k=0;
    printf("i=%d, j=%d,k=%d \n",i,j,k);

    i=1;
    j=5;
    k=7;

    printf("i=%d,j=%d,k=%d \n",i,j,k);

    return 0;
}

//exercise 5-1
#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a=3;
    b=a+5;

    printf("a의 값: %d \n",a);
    printf("b의 값: %d \n",b);

    printf("변수 a의 주소 : %x \n", &a);
    printf("변수 b의 주소 : %x \n", &b);
    
    return 0;

}

//exercise 4-8
#include <stdio.h>

#define PI 3.14
#define NUM 100
#define BUFFER_SIZE 200

int main()
{
    printf("%lf \n",PI);
    printf("%d \n",NUM);
    printf("%d \n", BUFFER_SIZE);

    return 0;

}

//exercise 4-7
#include <stdio.h>
int main(void)
{
    const int NUM;
    NUM=100;

    return 0;
}

//exercise 4-6
#include <stdio.h>
int main(void)
{
    const int NUM=100;
    const double PI=3.14;

    //NUM=200;
    //PI=4.14;

    return 0;

}


//exercise 4-5
#include <stdio.h>
int main(void)
{
    printf("문자열 상수는 %s입니다. \n","A");
    printf("문자열 상수는 %s입니다. \n","10+10");
    printf("문자열 상수는 %s입니다.", "Hi, everyone");

    return 0;   
    
}

//exercise 4-4
#include <stdio.h>
int main(void)
{
    printf("문자 상수 %c %c %c는 \n",'a','b','c');
    printf("ASCII 코드 10진수로 %d %d %d는 \n",'a','b','c');
    printf("ASCII 코드 16진수로 %x %x %x는 \n",'a','b','c');

    printf("\n--------------------\n");

    printf("문자 상수 %c %c %c는 \n",'!','@','#');
    printf("ASCII 코드 10진수로 %d %d %d는 \n",'!','@','#');
    printf("ASCII 코드 16진수로 %x %x %x는 \n",'!','@','#');

    return 0;


}

//exercise 4-3
#include <stdio.h>
int main(void)
{
    printf("문자 상수 %c %c %c입니다. \n",'a','b','c');
    printf("문자 상수 %c %c %c입니다. \n", '!','@','#');

    return 0;
}


//exercise 4-2
#include <stdio.h>
int main(void)
{
    printf("실수혈 상수 %1f + %1f = %1f =입니다. \n", 3.1, 4.1, 3.1+4.1);

    return 0;
}


//exercise 4-1
#include <stdio.h>
int main(void)
{
    printf("10진수 정수형 상수 %d+%d=%d입니다. \n",10,20,10+20);
    printf("16진수 정수형 상수 %x+%x=%x입니다. \n",0x10,0x20,0x10+0x20);
    printf("8진수 정수형 상수 %o+%o=%o입니다. \n", 010,020, 010+020);

    return 0;

}

//exercise 3-9
#include <stdio.h>
int main(void)
{
    int a=3;
    int b=4;

    printf("a의 값 : %d \n",a);
    printf("b의 값 : %d \n",b);

    printf("변수 a의 시작 주소 : %x \n", &a);
    printf("변수 b의 시작 주소 : %x \n", &b);

    return 0;
}

//exercise 3-8
#include <stdio.h>
int main(void)

{
    int appleBox=30;
    int grapeBox=20;
    int total;

    total=appleBox + grapeBox;
    printf("총 %d박스가 있습니다. \n", total);

    return 0;
}  


//exercise 3-7
#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a=1;
    b=2;

    int c;
    c=3; 
    
    printf("a의 값 : %d \n", a);
    printf("b의 값 : %d \n", b);
    printf("c의 값 : %d \n", c);

    return 0;
}


//exercise 3-6
#include <stdio.h>
int main(void)
{
    int a=0;
    int b=1;

    printf("a의 값은 %d입니다.\n",a);
    printf("b의 값은 %d입니다.\n",b);

    a=a+10;
    b=b+10;

    printf("변경된 a의 값은 %d입니다. \n",a);
    printf("변경된 b의 값은 %d입니다.\n",b);

    return 0;
}

//exercise 3-5
#include <stdio.h>
int main(void)
{
    int a=0;
    int b=1;

    printf("a의 값은 %d입니다. \n",a);
    printf("b의 값은 %d입니다. \n",b);

    return 0;
}

//exercse 3-4
#include <stdio.h>
int main(void)

{
    int a;
    int b;

    printf("%d \n",a);
    printf("%d \n",b);

    return 0;
}

//exercise 3-3
#include <stdio.h>
int main(void)
{
    int a,b;
    float c,d;

    return 0;
}

//exercise 3-2
#include <stdio.h>
int main(void)
{
    int a;
    float b;

    return 0;
}

//exercise 3-1
#include <stdio.h>
int main(void)
{
    int a;
    int b;
    return 0;
}

//exercise 2-13
#include <stdio.h>
int main(void)
{
    float f1,f2;
    double d1,d2;

    printf("float형 실수 두 개 입력: ");
    scanf("%f %e", &f1, &f2);
    printf("float형 실수 출력 : f1=%f, f2=%e \n", f1,f2);

    printf("double형 실수 두 개 입력 : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double형 실수 출력 : d1=%1f, d2=%1e \n", d1, d2);

    return 0;
}

 //exercise 2-12
#include <stdio.h>
int main(void)
{
    int a,b,c;

    printf("10진수 정수 1개 입력 : ");
    scanf("&d",&a);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",a,a,a);

    printf("16진수 정수 1개 입력 : ");
    scanf("&x",&b);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",b,b,b);

    printf("8진수 정수 1개 입력 : ");
    scanf("&o",&c);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",c,c,c);

    return 0;

}

 
 //exercise 2-11
 #include <stdio.h>
 int main(void)
 {
    int age;
    printf("What is your age?:");
    scanf("%d",&age);
    printf("Wow! really? Are you %d years old? \n", age);
    
    return 0; 
 }

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