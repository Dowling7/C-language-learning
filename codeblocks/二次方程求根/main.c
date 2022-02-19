#include<stdio.h>
#include<math.h>
#include<unistd.h>

void root(double a, double b, double c){
	    double x1, x2, x;
	    printf("please input a,b,c");
	    scanf("%lf,%lf,%lf",&a,&b,&c);
	    double delta=pow(b,2)-4*a*c;
	    if (delta>0){
		        printf("x1=%lf\nx2=%lf", x1, x2);
			 x1=(-b+sqrt(delta))/(2*a),
				      x2=(-b-sqrt(delta))/(2*a);
	    }else if(delta=0){
		    printf("x=%lf",x);
		         x=(-b)/(2*a);
	    }else {
		    printf("imagine roots only,please wait for a moment");
		     double real= -b/(2*a);
		      double imag=sqrt(-delta)/(2*a);
		       printf("double x1=%lf+%lf",  real,  imag);
		        printf("double x2=%lf-%lf",  real,  imag);
	    }
}
int main(void){
    void root;
}
