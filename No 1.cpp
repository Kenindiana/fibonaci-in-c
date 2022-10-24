#include<stdio.h>
int main()
{
	long long unsigned int i,angka[101],fibonanci,faktorial=1,gcd=1,akar=3;
	printf("masukan angka pertama:\n=");
	scanf("%llu",&angka[0]);
	printf("masukan angka kedua:\n=");
	scanf("%llu",&angka[1]);
	printf("masukan deret fibonanci keberapa yang ingin ditentukan:\n=");
	scanf("%llu",&fibonanci);
	for(i=2;i<fibonanci;i++)
	{
		angka[i]=angka[i-1]+angka[i-2];
	}
	printf("deret fibonanci ke %llu = %llu\n",fibonanci,angka[fibonanci-1]);
	for(i=angka[0];i>1;i--)
	{
		faktorial*=i;
	}
	printf("faktorial dari %llu adalah %llu\n",angka[0],faktorial);
	faktorial=1;
	for(i=angka[1];i>1;i--)
	{
		faktorial*=i;
	}
	printf("faktorial dari %llu adalah %llu\n",angka[1],faktorial);
	while(angka[0] % 2 == 0 && angka[1] % 2 == 0)
	{
		angka[0]/=2;
		angka[1]/=2;
		gcd*=2;
	}
	while(gcd * akar <= angka[1] && gcd * akar <= angka[0])
	{
		if(angka[0] % akar == 0 && angka[1] % akar == 0)
		{
			angka[0]/=akar;
			angka[1]/=akar;
			gcd*=akar;
		}else
		{
			akar+=2;
		}
	}
	printf("gcd mereka adalah %llu\n",gcd);
	return 0;
}
