#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}


#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    return 0;
}

#include <stdio.h>
int main() {
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}


#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
    float u, a, t, V, S, T, H;
    float b, c, p;
    printf("Enter values for u, a, t, b, c, p: ");
    scanf("%f %f %f %f %f %f", &u, &a, &t, &b, &c, &p);
    V = u + a * t;
    S = (u * t) + (0.5 * a * t * t);
    T = (2 * a) + sqrt(b) + (9 * c);
    H = sqrt((b * b) + (p * p));
    printf("V = %.2f\nS = %.2f\nT = %.2f\nH = %.2f\n", V, S, T, H);
    return 0;
}


#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    printf("Before swap: %d %d\n", a, b);
    return 0;
}

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: %d %d\n", a, b);
    printf("Before swap: %d %d\n", a, b);
    return 0;
}


#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Greatest: %d\n", (a > b && a > c) ? a : (b > c ? b : c));
    return 0;
}

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("Greatest: %d\n", a);
    else if (b > c)
        printf("Greatest: %d\n", b);
    else
        printf("Greatest: %d\n", c);
    return 0;
}

// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a letter: ");
//     scanf("%c", &ch);
//     switch(ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("Vowel\n");
//             break;
//         default:
//             printf("Consonant\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num > 0) {
        case 1:
            printf("Positive\n");
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("Negative\n");
                    break;
                default:
                    printf("Zero\n");
            }
            break;
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
    return 0;
}


#include <stdio.h>
int main() {
    int num, count = 0, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    while (num) {
        count++;
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    printf("Digits count: %d\nReverse: %d\n", count, reverse);
    return 0;
}



#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

#include <stdio.h>
int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#include <math.h>
int main() {
    int num, sum = 0, temp, remainder, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    for (int i = 0; i < digits; i++) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}


#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {  
        for (j = 1; j <= i; j++) {  
            printf("* ");
        }
        printf("\n");  
    }
    return 0;
}


#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {  
        for (j = 1; j <= n - i; j++) {
            printf("  ");  
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");  
    }
    return 0;
}

#include<stdio.h>
int factorial(int n) {
    if (n < 0)
        return 0;  
    if (n == 0 || n == 1)
        return 1; 
        
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0)
        printf("Factorial not defined for negative numbers\n");
    else
        printf("Factorial of %d is %llu\n", num, factorial(num));
        
    return 0;
}


#include <stdio.h>
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}





