
//exercise 2-13
#include <stdio.h>
int main(void)
{
    float f1,f2;
    double d1,d2;

    printf("float�� �Ǽ� �� �� �Է�: ");
    scanf("%f %e", &f1, &f2);
    printf("float�� �Ǽ� ��� : f1=%f, f2=%e \n", f1,f2);

    printf("double�� �Ǽ� �� �� �Է� : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double�� �Ǽ� ��� : d1=%1f, d2=%1e \n", d1, d2);

    return 0;
}

 /*
 //exercise 2-12
#include <stdio.h>
int main(void)
{
    int a,b,c;

    printf("10���� ���� 1�� �Է� : ");
    scanf("&d",&a);
    printf("10���� : %d,16���� : %x,8���� : %o \n",a,a,a);

    printf("16���� ���� 1�� �Է� : ");
    scanf("&x",&b);
    printf("10���� : %d,16���� : %x,8���� : %o \n",b,b,b);

    printf("8���� ���� 1�� �Է� : ");
    scanf("&o",&c);
    printf("10���� : %d,16���� : %x,8���� : %o \n",c,c,c);

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

    printf("���� �츮���� ���� ������� 5%%�Դϴ�.\n");

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
    printf("a�� �빮�ڷ� ǥ���ϸ� %c�Դϴ�.\n",'A');
    printf("%s %c�Դϴ�. \n", "a�� �빮�ڷ� ǥ���ϸ�", 'A');
    printf("%s %s\n","2 ���ϱ� 3��",2*3,"�Դϴ�.");

    return 0;
}



// exercise 2-6

#include <stdio.h>
int main(void)
{  
   printf("10���� ����: %d \n",0.5);
   printf("10���� �Ǽ�: %f \n",0.5);
   printf("10���� �Ǽ�: %1f \n",0.5);

   printf("�Ҽ��� ���� 6�ڸ� �̻� : %f \n");
       
   return 0;
    
}

  

// exercise 2-5
#include <stdio.h>
int main()
{
   printf("10���� : %d�� 16���� : %x, 8���� : %o�Դϴ�. /n" , 50,50,50);
   printf("10���� : %d�� 16���� : %x, 8���� : %o�Դϴ�. /n" , -50,-50,-50);    
    // 16������ 8������ ���� ǥ�� �Ұ�
    
   return 0;
}

// exercise 2-4 

#include <stdio.h>

int main()
{
    printf("%d ���ϱ� %d�� %d�Դϴ�.\n",3,5,3+5);
    printf("%i ���ϱ� %i�� %i�Դϴ�.\n",3,5,3+5);
    printf("%d-%d = %d�Դϴ�.\n",3,5,3-5);
    printf("%i-%i = %i�Դϴ�.\n",3,5,3-5);
    
    return 0;
}

// exercise 2-3
# include <stdio.h>
int main(void)

{  
    printf("\t Hello C! \n Hello world! \n");
    printf("ū����ǥ : \" \" \n");
    printf("��������ǥ : \' \' \n");
    printf("�������� : \\ \n");

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