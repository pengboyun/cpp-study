//
//  main.cpp
//  Self_Aught
//
//  Created by 彭博云 on 2020/5/7.
//  Copyright © 2020 彭博云. All rights reserved.
//

#include <iostream>
#include <math.h>
void one_1() {
    printf("%s\n","第一题答案:");
    //括号中的’%s‘为字符串(str)类型，’\n‘为换行符
    printf("%d\n",1+2);
    //‘%d’为整数(int)类型
    printf("%d\n",3-4);
    printf("%d\n",3*6);
    printf("%f\n",8./5);
}
int one_2(){
    printf("%.1f\n",8/5.);
    //‘%f’为浮点数(float)类型
    return 8/5;
}
void one_3(){
    printf("%.8f",1+2*sqrt(3)/(5-0.1));
    //                    1+(2√3)
    //其中的算式意为数学表达式:——————
    //                     5-0.1
}
void one_4(){
    int a,b;
    //声明变量为整数类型
    scanf("%d%d",&a,&b);
    //括号中的‘&’符号是用于让用户输入数字的
    printf("%d\n",a+b);
}
void Example1(){
//题目：输入底面半径和高，输出圆柱体表面积，π取3.14，保留三位小数
    double r,h;
    const double pi = acos(-1.0);
    printf("%.100lf",pi);
    scanf("%lf%lf",&r,&h);
    printf("%s","圆柱变面积为：");
    double s1 = 3.1415926535*r*r;
    double s2 = 3.1415926535*2*r*h;
    double s = s1*2.0 + s2;
    printf("%.3f",s);
}
void exercises(){
    //int a,b,c;
    //scanf("%d%d%d",&a,&b,&c);
    //printf("%d\n",(a+b+c)/3);
//———————————————————————————————————
    //int F;
    //scanf("%d",&F);
    //printf("%.3f",5*((double)F-32)/9);
//———————————————————————————————————
    //int i,z;
    //scanf("%d",&i);
    //z = (i+1.0)*(i/2.0) ;
    //printf("%d\n",z);
//———————————————————————————————————
    //int j;
    //scanf("%d",&j);
    //if (j < 300){
    //    printf("%d",j*95);
    //}
    //else
    //{
    //    printf("%.2f",j*95*0.85);
    //}
//————————————————————————————————————
    int y;
    scanf("%d",&y);
    if (y % 4 == 0){
        if (y % 400 == 0) {
            printf("%s\n","Century leap year");
        }
        else if (y % 4 == 0 and y % 100 != 0){
            printf("%s\n","Leap year");
        }
        
    }
        else
        {
            printf("%s\n","Not a leap year");
        }

//___________________________________________\\
    
}
int main() {
    //one_1();
    //调用函数
    //int i = one_2();
    //printf("%d + %d = %d\n",i,99,i+99);
    //one_3();
    //one_4();
    Example1();
    //exercises();
    return 0;
}
