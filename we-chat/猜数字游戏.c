//��ҿ������Լ��ı�����������������Ĵ��룬���Է��֣�ÿ�β��������������һ���ġ�
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int x = 0;
//	int test = 5;
//	int i = 0;
//	i = test;
//	//srand(1);//��дsrand������Ĭ��srand�ڲ���Ϊ1
//	while (i--) {
//		x = rand()%10 + 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//}
////��ʱ�����ǵ���srand�������Ҹı�������ٴι۲������������У��ᷢ����ε��������֮ǰ�Ĳ�ͬ��
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
//���˵����srand�ڵĲ���������rand����������ͬ�����У�������Щ���в���������ġ�
//�������Ҫ������������ͱ��벻�ϸı�srand�����ڵĲ�������ʱ���Ǿ���Ҫ����time������
//#include<time.h>
//int main() {
//	time_t t1, t2;
//	t1 = time(NULL);//�����ָ�룬��Ҫ��t1���շ��ص�ʱ��
//	time(&t2);//����ָ�룬��ǰ��ʱ���д��t2
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