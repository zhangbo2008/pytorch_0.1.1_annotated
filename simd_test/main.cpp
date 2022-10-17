#include "immintrin.h"
#include "stdio.h"

void _mm256_print_epi32(__m256i p){
     int *p1 = (int*)&p;       // p是一个8int,所以我们把他取地址,然后转化为int指针. int指针记做p1,然后下面用偏移量,打印内部的int数.
     printf("%d %d %d %d %d %d %d %d\n",p1[0],p1[1],p1[2],p1[3],p1[4],p1[5],p1[6],p1[7]);
};
//这个函数效果是第一行,加上第二行得到第三行这个向量.
// 这是啥意思捏，就是定义一个m256i的向量a，将0~7一共8个整数装载到256位的a向量中。m256i的意思是这个类型里面装的是8个整型数据，m256（没有i）的意思的装了8个float类型数据的意思，m256d装的就是4个double类型的，因为double是64位的。同理你还会遇到m128i就是装了4个整型变量的意思，m128就是装了4个float型的。变量的命名规则大致讲清楚了。然后咱们去看看这个set函数又是个啥，查找guide：
#define DECLARE_SUMX(rows) DECLARE_SUM_ ## rows
#define example1(instr) #instr
int main()
{
    __m256i a = _mm256_set_epi32(7,6,5,4,3,2,1,0);//从由地址高到低的顺序装载//变成一个向量. 因为都是帧数所以是最后i  , 256个bit来表示,所以里面装8个int. 所以这里面我们装载7到0.作为一个向量.
    _mm256_print_epi32(a);
    __attribute__((aligned(32))) int d1[8] = {-1,-2,-3,-4,-5,-6,-7,-8};  //按照32位进行对齐.

// 在GCC下：struct my{ char ch; int a;}     sizeof(int)=4;sizeof(my)=8;（非紧凑模式）
 
// 在GCC下：struct my{ char ch; int a;}__attrubte__ ((packed))        sizeof(int)=4;sizeof(my)=5



    __m256i d = _mm256_load_si256((__m256i*)d1);//装在int可以使用指针类型转换 必须32位对齐
   _mm256_print_epi32(d);
    __m256i d2 = _mm256_add_epi32(d,a);
   _mm256_print_epi32(d2);

 
char * str=example1(abc);
 //char* a= DECLARE_SUMX(rows);
   
   printf("%d",0xFFFFFFFC);
    return 0;
}
