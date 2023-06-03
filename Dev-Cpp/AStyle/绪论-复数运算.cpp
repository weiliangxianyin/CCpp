#include <stdio.h>

struct complex {
	double real;
	double image;
};

struct complex init(double real, double image);
struct complex add(struct complex a, struct complex b);
struct complex sub(struct complex a, struct complex b);
struct complex mul(struct complex a, struct complex b);

int main(void) {
	double real,image;
	struct complex x,y,z,t1,t2;
	scanf("%lf%lf",&real,&image);
	x=init(real,image);
	scanf("%lf%lf",&real,&image);
	y=init(real,image);
	t1=add(x,y);
	t2=sub(x,y);
	z=mul(t1,t2);

	if(z.image>=0)printf("%.2lf+%.2fi\n",z.real,z.image);
	else printf("%.2lf%.2fi\n",z.real,z.image);

	return 0;
}

/*提交以下代码*/
struct complex init(double real, double image) {
	struct complex c;
	c.real=real;
	c.image=image;
	return c;
}

struct complex add(struct complex a, struct complex b) {
	struct complex c;
	c.real=a.real+b.real;
	c.image=a.image+b.image;
	return c;
}

struct complex sub(struct complex a, struct complex b) {
	struct complex c;
	c.real=a.real+b.real;
	c.image=a.image-b.image;
	return c;
}

struct complex mul(struct complex a, struct complex b) {
	struct complex c;
	c.real=a.real*b.real-a.image*b.image;
	c.image=a.real*b.real+a.image*b.image;
	return c;
}
