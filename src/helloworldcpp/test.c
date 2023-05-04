#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <time.h>
#include "test.h"
#define MAX 1000000
#define CODE 
int num;



void ex9_2()
{
    int i, j;
    int k;
    

    printf("숫자 두개를 입력하세요 : ");
    scanf("%d %d", &i, &j);

    k = max(i, j);
    printf("%d와 %d 중 큰 수는 %d입니다.\n", i, j, k);
}


void ex8_13()
{
    int num;

    for(num=0; num<101; num++)
    {
        if(num%2==1)
            continue;

        printf("%d \n", num);    
    }
}

void ex8_12()
{
    char ch;

    printf("문자를 입력하세요(q를 입력하면 종료) : ");
    for( ;  ; )
    {
        scanf("%c",&ch);
        if(ch=='q')
            break;
    }
    printf("반복문을 종료합니다. \n");

}

void ex8_11() 
{
    char ch;

    printf("(T)hursday,(F)riday,(S)aturday \n");
    printf("문자 입력(T,F,S) : ");

    scanf("%c", &ch);

    switch (ch) {
        case 'T':
        case 't':
            printf("Thursday \n");
            break;

        case 'F':
        case 'f':
            printf("Friday \n");
            break;

        case 'S':
        case 's':
            printf("Saturday \n");
            break;

        default:
            printf("잘못 입력되었습니다. \n");
    }
}


void ex8_10()
{ 
    
    printf("몇번의 스위치를 누르시겠습니까?");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("전등이 켜짐 \n");
            break;

        case 2:
            printf("전등이 꺼짐 \n");
            break;

        case 3:
            printf("고장 \n");
            break; 

        default:
            printf("스위치 오류 : 우리집 스위치는 1번 ~ 3번까지만 있습니다. \n");       
    }
}



void ex8_8()
{
    printf("C 언어 성적 입력 : ");
    scanf("%d,&num");

    if(num>=95)
        printf("A+입니다. \n");
    else if(num>=90)
        printf("A입니다. \n");
    
    else if(num>=85)
        printf("B+입니다. \n");
    else if(num>=80)
        print("B입니다. \n");
    else
        printf("F입니다.\n");
 
} 

void ex8_7()
{
    printf("c언어 성적 입력 : ");
    scanf("%d",&num);

    if(num>=95)
        printf("A+입니다. \n");
    else if(num>=90)
        printf("A입니다. \n");
    else if(num>=85)
        printf("B+입니다. \n");
    else if(num>=80)
        printf("B입니다. \n");
    else
        printf("F입니다.\n");
 
}

void ex8_6()
{
    printf("숫자 입력: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("0보다 큰 수가 num에 저장\n");
    } else if (num == 0) {
        printf("0을 num에 저장\n");
    } else {
        printf("0보다 작은 수가 num에 저장\n");
    }
}

void ex8_5()
{
    printf("숫자 입력 : ");
    scanf("%d,&num");

    if(num>0)
        printf("0보다 큰 수가 num에 저장 \n");
    else
    {
        if(num==0)
            printf("0이 num에 저장 \n");
        else
            printf("0보다 작은 수가 num에 저장 \n");

    }

}

void ex8_4()
{
  
    printf("숫자 입력 : ");
    scanf("%d",&num);

    if(num>0)
        printf("0보다 큰 수가 num에 저장 \n");
    
    else
        printf("0 또는 0보다 작은 수가 num에 저장 \n");

}

void ex8_3()
{
    int age;

    printf("나이 입력 : ");
    scanf("$d",&age);

    if(age>=15 && age<=100)
        printf("회원 가입이 가능합니다 \n");

    else 
        printf("회원 가입이 가능합니다 \n ");
}


void ex8_2()
{
    printf("5의 배수 : ");
    for(num=1; num<=100; num++)
    {
        if(num%5==0)
           printf("%3d",num);
    }
}


void ex8_1()
{
    printf("숫자를 입력하세요 : *");
    scanf("%d",&num);

    if(num>=0)
        printf("양수입니다. \n");
    
    if(num<0)
        printf("음수입니다. \n");

}


void ex7_16()
{
    int num=10;
    do
    { 
        printf("%d",num);
        num++;
        
    } while (num<10);

    printf("\n **while 문을 종료합니다.** \n");
        
}
    
    
void ex7_15()
{
    int i,factorial=1;
    for(i=1; i<=10;)
    {
        factorial=factorial+i;
        i++;

    }
    printf("1부터 10까지의 곱 :  %d \n", factorial);

}


void ex7_14()
{
    int i, factorial = 1;
    for(i = 1; i <= 10; i++)
    {
        factorial *= i;
    }
    printf("1부터 10까지의 곱 : %d\n", factorial);
}

void ex7_13()
{
    int i=1, factorial=1;
    for(; i<=10; i++)
    {
        factorial=factorial+i;
    }
    printf("1부터 10까지의 곱 : %d \n",factorial);
 
}

void ex7_12()
{
    int i;
    int factorial=1;

    for(i=1; i<=10; i++)

    {
        factorial=factorial+i;
    }
    printf("1부터 10까지의 곱: %d \n",factorial);
 
}



void ex7_11()
{
    int num,j=9,result=0;
    printf("숫자를 입력하세요 : ");
    scanf("%d",&num);

    for (; num>0; num--)

    {
        for(j=9; j>0; j--)
        {
            result=num*j;
            printf("%d*%d=%d \n",num,j, result);

        }
        printf("-------\n");
    }
}


void ex7_10()
{
    int i, j;
    int result=0;

    for (i=2; i<10; j++)
    {
        for(j=1; j<10; j++);
        {
            result=i*j;
            printf("%d*%d=%d \n",i,j,result);
            
        }
        printf("-------\n");
    }
   
}


void ex7_9()
{
    int i;
    for(i=0; 1; i++)
    {
        printf("반복 횟수 : %d \n",i);

    }
   
}


void ex7_8()
{
    int num=0, i, result=0;

    printf("숫자를 입력하세요 :");
    scanf("%d",&num);

    for(i=1; i<10; i=i+2)
    {
        result=num*1;
        printf("%d*%d=%d입니다. \n",num,i,result);

    }

}

void ex7_7()
{
    int i, sum=0;
    for (i=0; i<=10; i++)
    {
        sum+sum+i;
        printf("i=%d,sum=%d \n", i, sum);

    }
    printf("-------반복문 종료------\n");

}



void ex7_6()
{
    for(num=0; num<5; num++)
    {
        printf("반복 내용 : %d \n",num);

    }
    printf("반복문을 종료한 후 : %d \n",num);

 
}

void ex7_5()
{
    int num=0, j=9, result=0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    while (num>0)
    {
        while (j>0)
        {
            result=num*j;
            printf("%d*%d=%d \n", num,j,result);
            j--;           
        }
        num--;
        j=9;
        printf("--------\n");
    }
    

}

void ex7_4()
{
    int i=2;
    int j=1;
    int result=0;
  {
    while(i<10)
    {
        result=i*j;
        printf("%d*%d \n",i,j,result);
        
    }
    i++;
    j=1;
    printf("--------------\n");
  }

}

void ex7_3()
{
    int i=0;
    while(1)
    {
        printf("반복 횟수 : %d \n", i);
        i++;

        //if 
        //break;

    }

}



void ex7_2()
{
    int i=0, sum=0;
    while (i<=10)
    {
        sum=sum+i;
        printf("i=%d,sum=%d \n",i,sum);

    }
    primtf("-----반복문 종료-----\n");

}


void ex7_1()
{
    int num=0;
    while(num<5)
    {
        printf("반복 내용: %d \n",num);
        num++;
    }

    printf("반복문 종류한 후 : %d \n",num);

}


void ex6_14()
{
    money num1=3000;
    money num2=10000;
    money num3=2000;
    money num4=0;

    num4=num1+num2+num3+num4;
    printf("total money : %dwon \n", num4);

    return 0;

}



void ex6_13()
{
    int num1=10;
    int num2=3;

    double result;

    result=num1/num2;
    printf("결과 : %lf \n",result);
    
    result=(double)num1/num2;
    printf("결과 : %lf \n",result);

    result=num1/(double)num2;
    printf("결과 : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("결과 : %lf \n",result);

}


void ex6_12()
{
    char num1=130;
    int num2=3.14;
    double num3=3;

    primtf("%d,%d,%lf \n", num1,num2,num3);

}

void ex6_11()
{
    int num1=100;
    double num2=3.14;

    printf("%lf \n",num1+num2);


}


void ex6_10()
{
    char val1;
    int val2;

    printf("문자 입력 : ");
    printf("%c",&val1);
    printf("ASCII 코드 값 %d입니다. \n",val1);
    
    printf("ASCII 코드 값 입력 : ");
    scanf("%d",&val2);
    printf("문자로 %c입니다. \n", val2);

}


void ex6_9()
{
    char vall;

    vall='A';
    printf("%d %c \n,vall,vall");

    vall='B';
    printf("%d %c \n,vall,vall");

    vall='C';
    printf("%d %c \n,vall,vall");

}


void ex6_8()
{
    float num1=0.123456;
    printf("float형: %f \n",num1);
    printf("float형: %.2f",num1);

}



void ex6_7()
{
    float num1=0.123456789012345;
    float num2=0.123456789012345;

    printf ("float형 : %f \n", num1);
    printf ("double형 : %f \n", num2);

    printf ("float형 : %.15f \n", num1);
    printf ("double형 : %.15lf \n", num2);

}


void ex6_6()
{
    float num1=3.4e+30;
    double num2=3.4e+30;

    printf("%f,%e \n", num1,num1);
    printf("%if,%le \n",num2,num2);

}


void ex6_5()
{
    printf("float의 최솟값 %e, 최댓값 %e \n", FLT_MIN, FLT_MAX);
    printf("double형의 최솟값 %e, 최댓값 %e \n", DBL_MIN, DBL_MAX);
    printf("long doublee형의 최솟값 %e, 최댓값 %e \n", LDBL_MIN, LDBL_MAX);

}

void ex6_4()
{
    char num1=-129;
    char num2=128;

    printf("%d \n", num1);
    printf("%d \n", num2);

    num1=-130;
    num2=129;

    printf("%d \n",num1);
    printf("%d \n", num2);


}



void ex6_3()
{
    signed char num1=130;
    unsigned char num2=130;

    printf("%d \n",num1);
    printf("%d \n",num2);

}



void ex6_2()
{
     printf("char형의 크기 %d 바이트, %d바이트 \n", CHAR_MIN, CHAR_MAX);
     printf("short의 크기 %d 바이트, %d바이트 \n", SHRT_MIN, SHRT_MAX);
     printf("int형의 크기 %d 바이트, %d바이트 \n", INT_MIN, INT_MAX);
     printf("long형의 크기 %d 바이트, %d바이트 \n", LONG_MIN, LONG_MAX);

} 



void ex6_1() 
{
    //정수형
    char num1=10;
    short num2=20;
    int num3=30;
    long num4=40;

    //실수형 
    float num5=3.14;
    double num6=3.15;
    long double num7=3.17;

    printf("\n------정수형 자료형과 변수의 메모리 크기------\n");
    printf("char형의 크기 %d 바이트, %d바이트 \n", sizeof(char), sizeof(num1));
    printf("short의 크기 %d 바이트, %d바이트 \n", sizeof(short), sizeof(num1));
    printf("int형의 크기 %d 바이트, %d바이트 \n", sizeof(int), sizeof(num1));
    printf("long형의 크기 %d 바이트, %d바이트 \n", sizeof(long), sizeof(num1));

    printf("\n------실수형 자료형과 변수의 메모리 크기------\n");
    printf("float의 크기 %d 바이트, %d바이트 \n", sizeof(float), sizeof(num1));
    printf("double형의 크기 %d 바이트, %d바이트 \n", sizeof(double), sizeof(num1));
    printf("long double형의 크기 %d 바이트, %d바이트 \n", sizeof(long double), sizeof(num1));
}




void ex5_18()
{
    int num1=10;
    int num2=-10;

    int result1;
    int result2;

    result1= num1 >> 1;
    result2= num1 >> 1;

    printf("비트 단위>> 연산의 결과 %d \n",result1);
    printf("비트 단위>> 연산의 결과 %d \n",result2);
}



void ex5_17()
{
    int num1=10;
    int result1;
    
    result1 = num1 << 2;
    printf("비트 단위 << 연산의 결과 %d \n",result1);
}


void ex5_16()
{
    int num1=20;
    int result1;

    result1 =~num1;
    printf("비트 단위 ~ 연산의 결과 %d \n", result1);

}

void ex5_15()
{
    int num1=20, num2=16;
    int result1;

    result1=num1^num2;
    printf("비트단위 ^ 연산의 결과 %d \n", result1);
}


void ex5_14()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 | num2;
    printf("비트 단위 | 연산의 결과 %d \n", result1);

}

void ex5_13()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 & num2;
    printf("비트단위 & 연산의 결과 %d \n", result1);
}

void ex5_12()
{
    int num1=2, num2=3;
    int result1;

    result1=(num1>num2) ? num1:num2;
    printf("result1에 저장된 값 %d \n", result1);
 
}

void ex5_11()
{
    int num1=2,num2=3,num3=5;
    int result1, result2, result3;

    result1=(num1>0)&&(num2<10);
    result2=(num2<=2) || (num3>5);
    result3=!num3;

    printf("result1에 저장된 값 %d \n", result1);
    printf("result2에 저장된 값 %d \n", result2);
    printf("result3에 저장된 값 %d \n", result3);
 
}

 
void ex5_10()
{
    int num1=2, num2=4;
    int result1, result2, result3, result4;

    result1=(num1>num2);
    result2=(num1<=num2);
    result3=(num1==num2);
    result4=(num1!=num2);

    printf("result1에 저장된 값 %d \n", result1);
    printf("result2에 저장된 값 %d \n", result2);
    printf("result3에 저장된 값 %d \n", result3);
    printf("result4에 저장된 값 %d \n", result4);
 
}

void ex5_9()
{
    int num1=10,num2=10;

    printf("%d \n",++num1);
    printf("%d \n", num1);
    
    printf("%d \n",num2++);
    printf("%d \n",num2);
 
}

void ex5_8()
{
    int num1=10,num2=10;
    int a,b;

    num1=num1+1;
    a=num1;
    printf("%d,%d \n",a,num1);

    b=num2;
    num2=num2+1;
    printf("%d,%d \n",b,num2);
 
}

void ex5_7()
{
    int num1=10,num2=10;
    int a,b;

    a=++num1;
    printf("%d,%d \n",a,num1);
    
    b=num2++;
    printf("%d,%d \n", b, num2);
 
}

void ex5_6()
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
 

}

void ex5_5()
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

void ex5_4()
{
    int num1, num2;

    num1=10/3;
    num2=10%3;

    printf("몫 : %d \n",num1);
    printf("나머지 : %d \n",num2);
 
}

void ex5_3()
{
    int a,b;
    a=6;
    b=2;

    printf("덧셈 연산 결과 : %d \n", a+b);
    printf("뺄셈 연산 결과 : %d \n", a-b);
    printf("곱셈 연산 결과 : %d \n", a*b);
    printf("나누기 연산 결과 : %d \n", a/b);
    printf("나머지 연산 결과 : %d \n", a%b);

  
}


void ex5_2()
{
    int i=0, j=0, k=0;
    printf("i=%d, j=%d,k=%d \n",i,j,k);

    i=1;
    j=5;
    k=7;

    printf("i=%d,j=%d,k=%d \n",i,j,k);

 
}

void ex5_1()
{
    int a;
    int b;

    a=3;
    b=a+5;

    printf("a의 값 : %d \n",a);
    printf("b의 값 : %d \n",b);

    printf("변수 a의 주소 : %x \n", &a);
    printf("변수 b의 주소 : %x \n", &b);


}


#define PI 3.14
#define NUM 100
#define BUFFER_SIZE 200

void ex4_8()
{
    printf("%lf \n",PI);
    printf("%d \n",NUM);
    printf("%d \n", BUFFER_SIZE);
 
}

void ex4_7()
{
    
    //const int NUM;
    //NUM=100;

 
}

void ex4_6()
{
    //                                                                          
    //const int NUM=100;
    //const double PI=3.14;

    //NUM=200;
    //PI=4.14;

}


void ex4_5()
{
    printf("문자열 상수는 %s입니다. \n","A");
    printf("문자열 상수는 %s입니다. \n","10+10");
    printf("문자열 상수는 %s입니다. \n","Hi, everyone");
    
}

void ex4_4()
{
    printf("문자 상수 %c %c %c는 \n",'a','b','c');
    printf("ASCII 코드 10진수로 %d %d %d \n",'a','b','c');
    printf("ASCII 코드 16진수로 %x %x %x \n",'a','b','c');

    printf("\n--------------------\n");

    printf("문자 상수 %c %c %c는 \n",'!','@','#');
    printf("ASCII 코드 10진수로 %d %d %d \n",'!','@','#');
    printf("ASCII 코드 16진수로 %x %x %x \n",'!','@','#');
 

}

void ex4_3()
{
    printf("문자 상수 %c %c %c입니다. \n",'a','b','c');
    printf("문자 상수 %c %c %c입니다. \n", '!','@','#');
 
}


void ex4_2()
{
    printf("실수형 상수 %1f + %1f = %1f =입니다. \n", 3.1, 4.1, 3.1+4.1);

  
}


void ex4_1()
{
    printf("10진수 정수형 상수 %d+%d=%d입니다. \n",10,20,10+20);
    printf("16진수 정수형 상수 %x+%x=%x입니다. \n",0x10,0x20,0x10+0x20);
    printf("8진수 정수형 상수 %o+%o=%o입니다. \n", 010,020, 010+020);

    
}

void ex3_9()
{
    int a=3;
    int b=4;

    printf("a의 값 : %d \n",a);
    printf("b의 값 : %d \n",b);

    printf("변수 a의 시작 주소 : %x \n", &a);
    printf("변수 b의 시작 주소 : %x \n", &b);
 
}

void ex3_8()

{
    int appleBox=30;
    int grapeBox=20;
    int total;

    total=appleBox + grapeBox;
    printf("총 %d박스가 있습니다. \n", total);

     
}  


void ex3_7()
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
 
}


void ex3_6()
{
    int a=0;
    int b=1;

    printf("a의 값은 %d입니다.\n",a);
    printf("b의 값은 %d입니다.\n",b);

    a=a+10;
    b=b+10;

    printf("변경된 a의 값은 %d입니다. \n",a);
    printf("변경된 b의 값은 %d입니다.\n",b);
 
}

void ex3_5()
{
    int a=0;
    int b=1;

    printf("a의 값은 %d입니다. \n",a);
    printf("b의 값은 %d입니다. \n",b);
 
}

void ex3_4()

{
    int a;
    int b;

    printf("%d \n",a);
    printf("%d \n",b);
 
}

void ex3_3()
{
    int a,b;
    float c,d;

}

void ex3_2()
{
    int a;
    float b;
 
}

void ex3_1()
{
    int a;
    int b;
   
}

void ex2_13(){

    float f1,f2;
    double d1,d2;

    printf("float형 실수 두 개 입력: ");
    scanf("%f %e", &f1, &f2);
    printf("float형 실수 두 개 입력 : f1=%f, f2=%e \n", f1,f2);

    printf("double형 실수 두 개 입력 : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double형 실수 출력 : d1=%1f, d2=%1e \n", d1, d2);
 
}

void ex2_12()
{
    int a,b,c;

    printf("10진수 정수 1개 입력: ");
    scanf("&d",&a);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",a,a,a);

    printf("16진수 정수 1개 입력 : ");
    scanf("&x",&b);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",b,b,b);

    printf("8진수 정수  1개 입력 : ");
    scanf("&o",&c);
    printf("10진수 : %d,16진수 : %x,8진수 : %o \n",c,c,c);

  
}

 
void ex2_11()
 {
    int age;
    printf("What is your age?:");
    scanf("%d",&age);
    printf("Wow! really? Are you %d years old? \n", age);
 }


void ex2_10()
{
    printf("%03d,%03d,%03d \n", 1,20,300);
    printf("%-3d,%-3d,%-3d \n", 1,20,300);
    printf("%+3d,%+3d,%+3d \n", 1,20,300);

    printf("%+3d, %+3d, %+3d \n",1,20,-300);

   
} 


void ex2_9()
{
    printf("%f \n", 0.000123);
    printf("%F \n", 0.0001236);
    
    printf("%e \n", 0.000123);
    printf("%E \n", 0.0001236);

    printf("%g \n", 0.000123);
    printf("%G \n", 0.0000123456);

    printf("올해 우리나라 경제 성장률을 5%% 입니다.\n");
 
}

void ex2_8()
{
    printf("%d \n", 2147483647);
    printf("%lld \n", 2147483650LL);
    printf("%u \n", 4294967295);

 
}

void ex2_7()
{
    printf("a를 대문자로 표현하면 %c입니다.\n",'A');
    printf("%s %c입니다. \n", "a를 대문자로 표현하면", 'A');
    printf("%s %d \n","2곱하기 3은?",2*3);
 
}



void ex2_6()
{  
   printf("10진수 정수: %d \n",0.5);
   printf("10진수 실수: %f \n",0.5);
   printf("10진수 실수: %1f \n",0.5);

   printf("소수점 이하 6자리 이상 : %f \n, 0.5655678");
   printf("소수점 이하 6자리 이상 : %lf \n, 0.5667784");

}

  

void ex2_5()
{
   printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. /n" , 50,50,50);
   printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다. /n" , -50,-50,-50);    
    // 16진수와 8진수는 음수 표현 불가
   
}

void ex2_4()
{
    printf("%d 더하기 %d는 %d입니다.\n",3,5,3+5);
    printf("%i 더하기 %i는 %i입니다.\n",3,5,3+5);
    printf("%d-%d = %d입니다.\n",3,5,3-5);
    printf("%i-%i = %i입니다.\n",3,5,3-5);
   
}

void ex2_3()
{  
    printf("\t Hello C! \n Hello world! \n");
    printf("큰따옴표 : \" \" \n");
    printf("작은따옴표 : \' \' \n");
    printf("역슬래시 : \\ \n");
 
}

void ex2_2()
{
    printf("heollo C world \n!");
 
}


void ex2_1()
{
    printf("Hello World!");
 
}
