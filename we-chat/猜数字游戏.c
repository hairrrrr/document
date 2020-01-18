//大家可以用自己的编译器反复运行下面的代码，可以发现，每次产生的五个数都是一样的。
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int x = 0;
//	int test = 5;
//	int i = 0;
//	i = test;
//	//srand(1);//不写srand函数是默认srand内参数为1
//	while (i--) {
//		x = rand()%10 + 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//}
////这时候我们调用srand函数并且改变参数，再次观察产生的随机序列，会发现这次的五个数和之前的不同了
//#include<stdlib.h>
//int main() {
//	int x = 0;
//	int test = 5;
//	int i = 0;
//	i = test;
//	srand(2);
//	while (i--) {
//		x = rand() % 10 + 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//}
//这就说明了srand内的参数可以让rand函数产生不同的序列，但是这些序列并不是随机的。
//如果我们要产生随机数，就必须不断改变srand函数内的参数，这时我们就需要引入time函数。
//#include<time.h>
//int main() {
//	time_t t1, t2;
//	t1 = time(NULL);//传入空指针，需要用t1接收返回的时间
//	time(&t2);//传入指针，当前的时间戳写入t2
//	printf("%lld\n",t1);
//	printf("%lld\n",t2);
//}
//int main() {
//	double a = 2;
//	double b = 200;
//	printf("%e\n%e", a, b);
//}
//#include<stdlib.h>
//#include<time.h>
//int main() {
//	srand((unsigned)time(NULL));
//	int i = 0;
//	int random = 0;
//	for (; i < 5; i++) {
//		random = rand();
//		printf("%d ", random);
//	}
//}