/*整数因子分解问题*/

/*思路：运用递归算法进行逐个搜索，每次进行求模=0的就是分解数，递归这个数一直到为1即可，每次求模后累计个数加1。*/

#include <stdio.h>
#include <stdlib.h>

int q=0; //定义q用来统计一共有多少种分解式
void zhengshufenjie(int n){ //定义一个整数分解的方法，用来编写分解整数的函数
	int i; 
	if(n==1){ //当n=1时，1的因子只有1，所以只有一种分解式
		q++; 
		return; 
	}else{ 
		for(i=2;i<=n;i++){ //当n>1时，每个数都要进行遍历，逐个算出整数的分解式的种数。
			if(n%i==0){ //当mod为0时，就是可以分解的数。再调用自身函数进行运算，最终求出结果。此处体现了递归算法的思想
				zhengshufenjie(n/i); 
			} 
		} 
	} 
} 

int main(){ 
	int num; //定义完方法体后，主函数就显得十分简洁，只需调用函数体进行运算即可。
	printf("请输入一个正整数：\n"); 
	scanf("%d",&num); 
	zhengshufenjie(num); 
	printf("\n共有几种不同的分解式：%d 种\n",q); 
	return 0; 
}
