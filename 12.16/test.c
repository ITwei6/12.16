#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != -1)
//	{
//		
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
//		{
//			printf("Vowel\n");
//			getchar();
//		}
//		else
//		{
//			printf("Consonant\n");
//			getchar();
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != -1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//			getchar();
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//			getchar();
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != -1)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//			getchar();
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//			getchar();
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != -1)
//	{
//
//		if (n > m)
//		{
//			printf("%d>%d\n",n,m);
//		}
//		else if (n < m)
//		{
//			printf("%d<%d\n",n,m);
//		}
//		else
//			printf("%d=%d\n",n,m);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int t;
//	while (scanf("%d", &t) != -1)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t < 0)
//		{
//			printf("0\n");
//		}
//		else
//		{
//			printf("0.5\n");
//		}
//	}
//	return 0;
//}
//int main() {
//    int a, b, c;
//    while (scanf("%d%d%d", &a, &b, &c) != -1) {
//        if ((a + b > c) && (a + c > b) && (b + c > a)) {
//            if (a == b && b == c) {
//                printf("Equilateral triangle!\n");
//            }// 3 2 4
//            else if (a==b||a==c||b==c) {
//                printf("Isosceles triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
//int main()
//{
//    double n, m;
//    double BIM;
//    while (scanf("%lf%lf", &n, &m) != -1)
//    {
//        m = m / 100;
//        BIM = n / m;
//        if (BIM < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (BIM >= 18.5 && BIM <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (BIM > 23.9 && BIM <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else if (BIM > 27.9)
//        {
//            printf("Obese\n");
//        }
//
//        return 0;
//    }
//}
//#include <math.h>
//int main()
//{
//	double a, b, c, x1, x2;
//	while (scanf("%lf%lf%lf", &a, &b, &c))
//	{
//		double sum = b * b - 4 * a * c;
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			if (sum == 0)
//			{
//				printf("x1=x2=%.2lf", (-b) / (2 * a));
//			}
//			else if (sum > 0)
//			{
//				printf("x1=%.2lf;x2=%.2lf", (-b + pow(sum, 0.5)) / (2 * a), (-b - pow(sum, 0.5) / (2 * a)));
//			}
//			else
//			{
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf-%.2lfi", -b / (2 * a) ,sqrt(-sum) / (2 * a), -b / (2 * a) ,sqrt(-sum) / (2 * a));
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//    char cal;
//    double a, b;
//    while (scanf("%lf%c%lf", &a, &cal, &b) != -1)
//    {
//        if (cal != '+' &&cal != '-' && cal != '*' && cal != '/')
//        {
//            printf("Invalid operation!\n");
//        }
//        else if (cal == '/')
//        {
//            if (b == 0.0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//        }
//        printf("%.4lf%c%.4lf=", a, cal, b);
//    }
//
//
//    return 0;
//}
//int main()
//{
//    char cal;
//    double a, b;
//    while (scanf("%lf%c%lf", &a, &cal, &b) != -1)
//    {
//        if (cal != '+' && cal != '-' && cal != '*' && cal != '/')
//        {
//            printf("Invalid operation!\n");
//        }
//        else if (cal == '/')
//        {
//            if (b == 0.0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else
//            {
//                printf("%.4lf%c%.4lf=%.4lf", a, cal, b, a / b);
//            }
//        }
//        else
//        {
//            if (cal == '+')printf("%.4lf%c%.4lf=%.4lf", a, cal, b, a + b);
//            if (cal == '*')printf("%.4lf%c%.4lf=%.4lf", a, cal, b, a * b);
//            if (cal == '-')printf("%.4lf%c%.4lf=%.4lf", a, cal, b, a - b);
//        }
//    }
//
//
//    return 0;
//}

//int main() {
//    int n;
//    while (scanf("%d", &n) != -1)
//    {
//        int i, j;
//        for (i = 0;i < n;i++)
//        {
//            for (j=0;j<n-1-i;j++)
//            {
//                printf("  ");
//            }
//            for (j = 0;j <= i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main() {
//    int n;
//    while (scanf("%d", &n) != -1)
//    {
//        int i, j;
//        for (i = 0;i < n;i++)
//        {
//            for (j = 0;j < n - 1 - i;j++)
//            {
//                printf(" ");
//            }
//            for (j = 0;j <= i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0;i < n - 1;i++)
//        {
//            for (j = 0;j <= i;j++)
//                printf(" ");
//            for (j = 0;j < n-1 - i;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

int main()
{
    int n;
    while (scanf("%d", &n) != -1)
    {
        /*   n = n + 1;*/
        int i, j;
        for (i = 0;i < n;i++)
        {
            for (j = 0;j < n - i;j++)
            {
                printf("* ");
            }

            printf("\n");

        }
        /*  for (i = 0;i < n ;i++)
          {
              for (j = 0;j <i+1;j++)
              {
                  printf("* ");
              }
              printf("\n");
          }
      }
     */
    }
    return 0;
}