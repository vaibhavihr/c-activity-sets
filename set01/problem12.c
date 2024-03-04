//12. Write a C program to find the sum of _n_ complex numbers

#include<stdio.h>

struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
    int n;
    n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    Complex sum = add_n_complex(n,c);
    output(n,c,sum);
    return 0;
}
int get_n()
{
    int n;
    printf("enter the how many complex numbers:");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part:");
    scanf("%f",&c.real);
    printf("Enter the imaginary part:");
    scanf("%f",&c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    for (int i = 0; i < n; i++)
    {
        c[i]=input_complex();
    }
    
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result={0.0,0.0};
    for (int i = 0; i < n; i++)
    { 
        result=add(result,c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result)
{
    printf("complex numbers entered:\n");
    for (int i = 0; i < n; i++)
    {
       printf("Complex number %d: %f+%fi\n",i+1,c[i].real,c[i].imaginary);
    }
    printf("Sum of the complex numbers:%f + %fi\n",result.real,result.imaginary);
}