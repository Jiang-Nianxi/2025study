//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>

//int main() {
//	double k;
//	double nk = 1.0;
//	double temp = 0;
//	double a = 0;
//	scanf("%lf", &k);
//	for (int i = 0; i<1000 ; i++)
//	{
//		temp = nk;
//		nk = (nk + k/nk) / 2.0;
//		a = temp - nk;
//		if (fabs(a) < 0.00001) {
//			break;
//		}
//		
//	}
//	printf("%.3lf\n", nk);
//	return 0;
//}



//whileÑ­»·°æ
//int main() {
//	double k;
//	double nk = 1.0;
//	double temp = 0;
//	double a = 0;
//	scanf("%lf", &k);
//
//	while (1) {
//		temp = nk;
//		nk = (nk + k / nk) / 2.0;
//		a = fabs(temp - nk);
//		if (a < 0.00001) {
//			printf("%.3lf\n", nk);
//			break;
//		}
//	}
//	return 0;
//}