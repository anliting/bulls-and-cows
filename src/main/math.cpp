#ifndef mainMathModule
#define mainMathModule
namespace math{
    // c for combination
    int c(int m,int n);
    // f for factorial
    int f(int m);
    // p for permutation
    int p(int m,int n);
    int c(int m,int n){
        return f(m)/(f(n)*f(m-n));
    }
    int f(int n){
        int x=1;
        for(int i=0;i<n;i++)
            x*=i+1;
        return x;
    }
    int p(int m,int n){
        return f(m)/f(m-n);
    }
}
#endif
